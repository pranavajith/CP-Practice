#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <algorithm>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n;
    cin>>n;
    map <ll,ll> m;
    set <ll> s;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        m[a]++;
        s.insert(a);
    }
    ll ans=0;
    for (auto i = s.begin();i!=s.end();i++){
        if (m[*i]==0)continue;
        while (m[*i]!=1){
            // ans++;
            ll a = *i;
            while (m[a]!=0){
                a++;
                ans++;
            }
            m[a]++;
            m[*i]--;
        }
    }
    cout<<ans<<"\n";
}

int main() 
{
    // TxtIO;
    // ll t;
    // cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}