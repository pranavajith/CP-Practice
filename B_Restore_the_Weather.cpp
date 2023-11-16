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
    ll n,k,a;
    cin>>n>>k;
    vector <ll> a1,b1, ans(n);
    map <ll,vector <ll> > m;
    for (int i=0; i<n; i++){
        cin>>a;
        m[a].push_back(i);
        a1.push_back(a);
    }
    for (int i=0; i<n; i++) {
        cin>>a;
        b1.push_back(a);
    }
    sort(a1.begin(), a1.end());
    sort(b1.begin(), b1.end());
    // for (auto d:a1) cout<<d<<" "; cout<<"\n"; for (auto d:b1) cout<<d<<" "; cout<<"\n";
    for (auto d:m){
        reverse(m[d.first].begin(), m[d.first].begin());
    }
    for (int i=0; i<n; i++){
        ans[m[a1[i]].back()] = b1[i];
        m[a1[i]].pop_back();
    }
    for (int i=0; i<n; i++) cout<<ans[i]<<" "; cout<<"\n";

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