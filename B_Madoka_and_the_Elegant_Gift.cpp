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
    cin>>n>>m;
    vector <vector <char> > v(n, vector <char> (m));
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) cin>>v[i][j];
    }
    // cout<<"ok\n";
    for (int i=0; i<n-1; i++) {
        for (int j=0; j<m-1; j++) {
            // cout<<i<<" "<<j<<" "<<v[i][j] + v[i][j+1] + v[i+1][j] + v[i+1][j+1]<<"\n";
            if ((v[i][j]-'0' + v[i][j+1]-'0' + v[i+1][j]-'0' + v[i+1][j+1]-'0') == 3) {
                cout<<"NO\n";
                return;
            }
        }
    }
    cout<<"YES\n";
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