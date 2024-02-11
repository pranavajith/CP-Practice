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
    ll n,m,a;
    cin>>n>>m;
    // cout<<"ok";
    vector < vector <ll> > v;
    for (int i=0; i<n; i++){
        // cout<<"ok!";
        vector <ll> temp;
        for (int j=0; j<m; j++) {
            cin>>a;
            temp.push_back(a);
        }
        v.push_back(temp);
        // cout<<"ok";
    }
    // cout<<v.size()<<"\n";
    ll x = 0, row = -1;
    for (int i=0; i<n; i++){
        x ^= v[i][0];
        if (count(v[i].begin(), v[i].end(), v[i][0]) != m) row = i;
    }
    vector <ll> ans(n,1);
    if (x==0 && row != -1){
        for (int i=1; i<m; i++){
            if (v[row][i] != v[row][0]){
                x = 1;
                ans[row] = i+1;
                break;
            }
        }
    }
    if (x==0){
        cout<<"NIE\n";
    }
    else {
        cout<<"TAK\n";
        for (int i=0; i<n; i++) cout<<ans[i]<<" ";
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