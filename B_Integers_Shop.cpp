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
    ll n;
    cin>>n;
    ll minL = LLONG_MAX, costL = LLONG_MAX, maxR = 0, costR = LLONG_MAX, maxlen = 0, costlen = LLONG_MAX;
    for (int i=0; i<n; i++){
        ll a,b,c;
        cin>>a>>b>>c;
        if (a < minL){
            minL = a;
            costL = c;
        }
        else if (a == minL)costL = min(costL, c);

        if (b > maxR){
            maxR = b;
            costR = c;
        }
        else if (b==maxR)costR = min(costR, c);
        if (maxlen < b-a+1){
            maxlen = b-a+1; costlen = c;
        }
        else if (maxlen == b-a+1){
            costlen = min(costlen, c);
        }
        ll ans = costL + costR;
        if (maxlen == maxR - minL + 1)cout<<min(costlen, ans)<<"\n";
        else cout<<ans<<"\n";
    }
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    ll t; cin>>t; while(t--)
        solve();
    return 0;
}