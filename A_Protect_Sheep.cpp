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
ll n,m;
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

bool check(ll i, ll j, vector < string > &v){
    if (i<0 || i>=n || j<0 || j>=m || v[i][j] != 'W') return false;
    // if (v[i][])
    return true;
}

void solve(){
    // ll n,m;
    cin>>n>>m;
    vector < string > v(n);
    for (int i=0; i<n; i++){
        cin>>v[i];
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if (v[i][j] == 'S'){
                if (check(i-1, j, v) || check(i+1, j, v) || check(i, j+1, v) || check(i, j-1, v)) {
                    cout<<"No\n"; return;
                }
            }
        }
    }
    cout<<"Yes\n";
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if (v[i][j] == '.') cout<<'D';
            else cout<<v[i][j];
        }
        cout<<"\n";
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