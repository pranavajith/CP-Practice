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
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector < vector <ll> > v((k+1)/2, vector <ll> (26, 0));
    for (int i=0; i<n; i+=k){
        // cout<<i<<" ";
        ll start = i, end = i+k-1, temp = 0;
        while (start < end){
            v[temp][s[start]-'a']++;
            v[temp][s[end]-'a']++;
            start++, end--, temp++;
        }
        if (start == end) v[temp][s[start]-'a']++;
    }
    // for (auto d:v){
    //     for (auto e:d) cout<<e<<" "; cout<<"\n";
    // }
    ll ans = 0;
    for (int i=0; i<(k+1)/2; i++){
        ll maxNum = 0;
        for (int j=0; j<26; j++) maxNum = max(maxNum, v[i][j]);
        if (k%2 && i == (k+1)/2 - 1) ans += n/k - maxNum;
        else ans += (2*n/k - maxNum);
    }
    cout<<ans<<"\n";
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