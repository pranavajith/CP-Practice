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
    map <ll,ll> m;
    vector <ll> v(n);
    // ll pref = 0, last = -1;
    for (int i=0; i<n;i++)cin>>v[i];
    ll pref = 0, ans = 0;
    m[0]=1;
    for (int i=0;i<n;i++){
        pref+=v[i];
        if (m[pref]){
            // cout<<i<<" ";
            ans++;
            pref = v[i];
            m.clear();
            m[0]=1;
            m[v[i]]=1;
        }
        else{
            m[pref]++;
        }
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