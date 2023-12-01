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
    ll n,a, count1 = 0;
    cin>>n;
    vector <pair <ll,ll> > v;
    pair <ll,ll> p;
    vector <ll> temp(n+1, 0);
    for (int i=0; i<n; i++){
        cin>>a;
        if (i>=a){
            count1++;
            p.first = i+1;
            p.second = a;
            v.push_back(p);
        }
        temp[i+1] = count1;
    }
    ll ans = 0;
    // for (int i=1; i<=n; i++) cout<<temp[i]<<" ";
    for (int i=v.size()-1; i>0; i--){
        if (v[i].second > 0) ans+=temp[v[i].second-1];
    }
    cout<<ans<<"\n";
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