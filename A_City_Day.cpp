#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <algorithm>
#include <limits>
#include <iomanip>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n,x,y;
    cin>>n>>x>>y;
    vector <ll> v(n);
    //Getting Days Forcast
    for (int i=0;i<n;i++)cin>>v[i];

    //Initialising vectors for prev x days and next y days
    vector <ll> xnum, ynum;
    for (int i=1; i<min(y+1, n);i++)ynum.push_back(v[i]);
    // * Haven't added values for intial x days as for the first day, -
    // * there WON'T be any x days to check for.
    // * the min(y+1, n) is a logistical issue that you will handle  -
    // * when solving. Check out third test case for reference.


    for (int i=0; i<n; i++){
        
        // Checking if either xnum is empty, or v[i] is least in xnum. Same for ynum.
        if ((xnum.size()==0 || v[i]<*min_element(xnum.begin(), xnum.end())) 
        && (ynum.size()==0 || v[i]<*min_element(ynum.begin(), ynum.end()))){
            cout<<i+1<<"\n";
            return;
        }
        xnum.push_back(v[i]);

        //Done only if there are any more elements to add.
        if (i+y+1 < n) ynum.push_back(v[i+y+1]);

        // We wanna remove for xnum only after the first x elements.
        if (i>=x) xnum.erase(xnum.begin());
        ynum.erase(ynum.begin());
    }

}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    // ll t; cin>>t; while(t--)
        solve();
    return 0;
}