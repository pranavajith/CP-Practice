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
    ll n,m; cin>>n>>m;
    vector <string> v(n);
    ll cnt = 0;
    for (int i=0; i<n; i++) cin>>v[i];
    for (int i=0; i<n-1; i++){
        for (int j=0; j<m-1; j++){
            vector <char> s;
            s.push_back(v[i][j]);
            s.push_back(v[i][j+1]);
            s.push_back(v[i+1][j+1]);
            s.push_back(v[i+1][j]);
            sort(s.begin(), s.end());
            if (s[0] == 'a' && s[1] == 'c' && s[2] == 'e' && s[3] == 'f') cnt++;
        }
    }
    cout<<cnt<<"\n";
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