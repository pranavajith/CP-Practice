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
    vector <vector <ll> >v;
    for (int i=0;i<n;i++){
        vector <ll> temp;
        ll a,b;
        cin>>a>>b;
        temp.push_back(a);
        temp.push_back(b);
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    ll ans = v[0][1], display = v[0][0];
    for (int i=1;i<n;i++){
        if (v[i][1]>=ans){
            
            ans = v[i][1];
        }
        else{
            ans = v[i][0];
    
        }
        display = v[i][0];
    }
    cout<<ans<<"\n";
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