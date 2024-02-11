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
    ll n,m;
    cin>>n>>m;
    vector <ll> v(n), v1(m);
    for (int i=0; i<n; i++) cin>>v[i];
    for (int i=0; i<m; i++) cin>>v1[i];
    vector <ll> pref; pref.push_back(0);
    for (int i=0; i<n; i++) pref.push_back(pref.back() + v[i]);
    ll firstiter = 0, seconditer = 0;
    while (seconditer < m) {
        while (pref[firstiter] < v1[seconditer]) firstiter++;
        firstiter--;
        cout<<firstiter+1<<" "<<v1[seconditer] - pref[firstiter]<<"\n";
        seconditer++;
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