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

bool check(vector < vector <char> > &v, ll i, ll j, ll n){
    if (i >= n-2 || j == 0 || j == n-1 || v[i+1][j] == '#' || v[i+1][j-1] == '#' || v[i+1][j+1] == '#' || v[i+2][j] == '#') return false;
    return true;
}

void solve(){
    ll n;
    cin>>n;
    vector < vector <char> > v(n, vector <char> (n));
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            char c; cin>>c;
            v[i][j] = c;
        }
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (v[i][j] == '.'){
                if (check(v, i, j, n)) {
                    v[i][j] = '#';
                    v[i+1][j] = '#';
                    v[i+1][j-1] = '#';
                    v[i+1][j+1] = '#';
                    v[i+2][j] = '#';
                }
                else {
                    // cout<<i<<" "<<j<<"\n";
                    cout<<"NO\n"; return;
                }
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
    // ll t; cin>>t; while(t--)
        solve();
    return 0;
}