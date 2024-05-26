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
    ll n; cin>>n;
    set <string> s; ll cnt = 0;
    for (int i=0; i<n; i++){
        string a; cin>>a;
        string b;
        vector <ll> check(26, 0);
        for (auto d:a){
            if (check[d-'a']) continue;
            check[d-'a'] = 1; b.push_back(d);
        }
        sort(b.begin(), b.end());
        if (s.find(b) != s.end()) continue;
        cnt++; s.insert(b);

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