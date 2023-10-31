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
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n,m;
    cin>>n>>m;
    vector <ll> v(n);
    for (int i=0; i<n; i++)cin>>v[i];
    ll q = 0;
    vector <ll> ans(n, 0);
    for (int i=n-1; i>=0; i--){
        if (v[i] <= q){
            ans[i]=1;
        }
        else if (q < m){
            q++;
            ans[i] = 1;
        }
    }
    for (int i=0; i<n; i++)cout<<ans[i]; cout<<"\n";
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