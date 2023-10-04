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
    ll n,m;
    cin>>n>>m;
    map <ll, vector <ll> > m1;
    vector <ll> v(n);
    for (int i=0;i<n;i++)cin>>v[i];
    for (int i=0;i<m;i++){
        ll a,b;
        cin>>a>>b;
        m1[a].push_back(b);
        m1[b].push_back(a);
    }
    vector <bool> check (1e5, true);
    ll minsum = INT_MAX;
    for (auto d:m1){
        check[d.first]=false;
        for (int i=0;i<d.second.size();i++){
            ll temp = d.second[i];
            if (check[temp]){
                for (int j=0; j<m1[temp].size();j++){
                    ll temp2 = m1[temp][j];
                    // if (check[temp2]){
                        if (count(m1[temp2].begin(), m1[temp2].end(), d.first)!=0)minsum = min(minsum, v[d.first-1]+v[temp-1]+ v[temp2-1]);
                    // }
                }
            }
        }
    }
    if (minsum==INT_MAX)cout<<-1<<"\n";
    else cout<<minsum<<"\n";
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