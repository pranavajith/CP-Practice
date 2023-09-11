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
    ll n,x;
    cin>>n>>x;
    map <ll,ll> m;
    set <ll> v;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        m[a]++;
        v.insert(a);
    }
    // auto ip = unique(v.begin(),v.end());
    // v.resize(distance(v.begin(),ip));
    // sort(v.begin(),v.end());
    ll ans=0;
    for (auto i = v.begin();i!=v.end();i++){
        if (m[*i]==0)continue;
        if (m[*i*x]==0){
            ans+=m[*i];
            // cout<<"hey1 "<<*i<<"\n";
            m[*i]=0;
        }
        else{
            if (m[*i]> m[x*(*i)]){
                m[*i]-=m[x*(*i)];
                m[x*(*i)]=0;
                ans+=m[*i];
                // cout<<"hey2 "<<*i<<"\n";
            }
            else{
                m[x*(*i)]-=m[*i];
                m[*i]=0;
            }
        }
    }
    cout<<ans<<"\n";
}

int main() 
{
    // TxtIO;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}