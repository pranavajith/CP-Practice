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
    ll n,m1;
    cin>>n>>m1;
    map <ll, vector <ll> > m;
    for (int i=1; i<=n; i++){
        m[i].push_back(i);
    }
    for (int i=0; i<m1; i++){
        ll a,b;
        cin>>a>>b;
        // cout<<a<<b<<"\n";
        m[a].push_back(b);
        // cout<<m[a].size() <<" ";
        m[b].push_back(a);
        // cout<<m[b].size()<<" ";
        // cout<<m[1].size();
    }
    // cout<<m[1].size()<<"here";
    // for (ll i=1 ; i<=n; i++)cout<<i<<" "<<m[i].size()<<"\n";cout<<"\n\n\n";
    for (int i=1; i<=n; i++){
        // cout<<i<<" i! \n";
        // cout<<m[i].size()<<" : m[i]\n";
       if (m[i].size() != 0){
        for (auto d: m[i]){
            // cout<<i<<" "<<d<<" ok\n";
            // // cout<<"ok!";
            // // cout<<i
            // if (find(m[d].begin(), m[d].end(), i) == m[d].end()){
            //     cout<<"NO\n";
            //     return;
            // }
            for (auto d1 : m[d]){
                if (count (m[d1].begin(), m[d1].end(), i) == 0 ){
                    // cout<<i<<" "<<d<<" "<<d1<<"\n";
                    cout<<"NO\n";
                    return;
                }
            }
        }
       }
    //    cout<<" yay!\n\n";
    }
    cout<<"YES\n";
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