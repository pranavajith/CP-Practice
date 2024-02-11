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
    ll n;
    cin>>n;
    vector <ll> v(n);
    for (int i=0; i<n; i++) cin>>v[i];
    vector <ll> temp (v.begin(), v.end());
    sort(temp.begin(),temp.end());
    vector <ll> ans(n,0);
    map <ll,ll> m;
    ll iter = 0;
    ll cursum = 0;
    ll count1 = 0;
    while (iter<n){
        ll temp1 = iter;
        cursum+=temp[temp1]; temp1++; count1++;
        while (temp1 < n && cursum >= temp[temp1]){
            cursum += temp[temp1]; temp1++; count1++;
        }
        for (int i=iter; i<temp1; i++) m[temp[i]] = count1;
        iter = temp1;
    }
    for (int i=0; i<n; i++) cout<<m[v[i]]-1<<" "; cout<<"\n";
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