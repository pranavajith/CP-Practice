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
    string s;
    cin>>s;
    set <char> se(s.begin(), s.end());
    // for (auto d:se)cout<<d<<" ";
    vector <ll> v(n, -1);
    for (auto d : se){
        ll last = -1;
        for (int i=0; i<n; i++){
            if (s[i]==d)last = i;
            if (last==-1)v[i]=1e9;
            v[i] = max(v[i], i-last+1);
        }
    }
    cout<<*min_element(v.begin(), v.end())<<"\n";
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