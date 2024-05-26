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

void f(vector <ll> &ans, ll n, vector <ll> &v, ll left, ll pos, ll right, ll d){
    ans[pos] = d;
    if (pos != left){
        ll leftMax = -1, pos1 = -1;
        for (int i=left; i<pos; i++){
            if (v[i] > leftMax) {
                leftMax = v[i]; pos1 = i;
            }
        }
        f(ans, n, v, left, pos1, pos-1, d+1);
    }
    if (pos != right){
        ll rightMax = -1, pos2 = -1;
        for (int i=pos+1; i<=right; i++){
            if (v[i]>rightMax){
                rightMax = v[i]; pos2 = i;
            }
        }
        f(ans, n, v, pos+1, pos2, right, d+1);
    }
}

void solve(){
    ll n;
    cin>>n;
    vector <ll> v(n);
    for (int i=0; i<n; i++) cin>>v[i]; 
    ll pos = find(v.begin(), v.end(), n) - v.begin();
    vector <ll> ans(n, 0);
    f(ans, n, v, 0, pos, n-1, 0);
    for (auto d:ans) cout<<d<<" "; cout<<"\n";
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