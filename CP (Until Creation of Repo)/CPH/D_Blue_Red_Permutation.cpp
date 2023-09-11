#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <algorithm>
#include <limits>
#include <iomanip>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n;
    cin>>n;
    vector <ll> v;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        v.push_back(a);
    }
    string s;
    cin>>s;
    vector <ll> l,r;
    for (int i=0;i<n;i++){
        (s[i] == 'B' ? l : r).push_back(v[i]);
    }
    sort(l.begin(),l.end());
    sort(r.rbegin(),r.rend());

    bool ok = true;
        for (int i=0;i<l.size();i++)
            if (l[i] < i + 1)
                ok = false;
        for (int i=0;i<r.size();i++)
            if (r[i] > n - i)
                ok = false;
    
    cout << (ok ? "YES" : "NO") << '\n';
    
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}