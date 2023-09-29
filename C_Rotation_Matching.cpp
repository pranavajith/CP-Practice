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
    ll n, ans=0;
    cin>>n;
    vector <ll> a(n);
    vector <ll> b(n);
    map <ll,ll> m;
    vector <ll> pos(2e5+5);
    for (int i=0;i<n;i++){
        cin>>a[i];
        pos[a[i]]=i;
    }
    for (int i=0;i<n;i++){
        cin>>b[i];
    }
    for (int i=0;i<n;i++){
        ll temp = pos[b[i]]-pos[a[i]];
        if (temp<0)temp+=n;
        m[temp]++;
    }
    for (auto i:m){
        ans = max(ans, i.second);
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