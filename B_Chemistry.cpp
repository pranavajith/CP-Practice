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
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    map <ll, ll> m;
    for (int i=0; i<n; i++){
        m[s[i]-'0']++;
    }
    ll countodd = 0;
    // vector <ll> v;
    for (auto d:m){
        if (d.second % 2 == 1){
            countodd++;
            // v.push_back(countodd);
        }
    }
    if (countodd > k + 1){
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
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