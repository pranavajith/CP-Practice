#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <queue>
#include <stack>
#include <algorithm>
#include <limits>
#include <iomanip>
using namespace std;
#define ll long long
ll mod = 1e9 + 7;
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n,h,m, a,b, ans = INT_MAX; 
    cin>>n>>h>>m;
    for (int i=0; i<n; i++){
        cin>>a>>b;
        if (a==h && b==m){
            ans = 0;
        }
        if (a<h || (a==h && b<m)){
            a+=24;
        }
        // if (a<h || (a==h && b<m)){
        //     a+=12;
        // }
        if (b<m){
            b+=60; a--;
        }
        // cout<<a<<" "<<b<<"\n";
        ans = min(ans, (a-h)*60 + b-m);
        // cout<<ans<<"\n";
    }
    // cout<<ans<<"\n";
    cout<<ans/60<<" "<<ans%60<<"\n";
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