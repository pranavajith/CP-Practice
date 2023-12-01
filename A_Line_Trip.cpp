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
    ll n,x;
    cin>>n>>x;
    vector <ll> v(n);
    for (int i=0; i<n; i++){
        cin>>v[i];
    }
    // v.push_back(2*(x-v[n-1]));
    vector <ll> ans(n+1);
    for (int i=0; i<n; i++){
        if (i==0) ans[i] = v[i];
        else{
            ans[i] = v[i] - v[i-1];
        }
    }
    ans[n] = 2*(x-v[n-1]);
    cout<<*max_element(ans.begin(), ans.end())<<"\n";
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