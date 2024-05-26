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
    vector < vector <ll> > v(n+1, vector <ll> (n+1, 0));
    for (int i=0; i<m; i++){
        ll a,b;
        cin>>a>>b;
        v[a][b] = 1;
        v[b][a] = 1;
    }
    for (int i=1; i<=n; i++){
        bool check = true;
        for (int j=1; j<=n; j++){
            if (v[i][j] == 1) {
                check = false;
                break;
            }
        }
        if (check){
            cout<<n-1<<"\n";
            for (int j=1; j<=n; j++){
                if (i==j) continue;
                cout<<i<<" "<<j<<"\n";
            }
            return;
        }
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