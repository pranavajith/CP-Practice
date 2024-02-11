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
    ll n,m;
    // cout<<"ok\n";
    cin>>n>>m;
    vector <string> g(n);
    for (int i=0; i<n; i++){
        cin>>g[i];
    }
    // cout<<"ok\n";
    // for (auto d:g) cout<<d<<" ";
    ll curcheck = 0;
    int ans[m];
    ans[0] = 0;
    for (int i=1; i<m; i++) {
        for (int j=1; j<n; j++) {
            if (g[j][i-1] == 'X' && g[j-1][i] == 'X') {
                curcheck ++;
                break;
            }
        }
        ans [i] = curcheck;
    }
    ll num; cin>>num;
    while (num--) {
        ll a,b;
        cin>>a>>b;
        if (ans[b-1] - ans[a-1] == 0) cout<<"YES\n";
        else cout<<"NO\n"; 
    }
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