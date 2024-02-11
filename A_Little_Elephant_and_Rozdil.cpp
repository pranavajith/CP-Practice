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
    ll n,a;
    cin>>n;
    vector <pair<ll,ll> > v;
    for (int i=0; i<n; i++) {
        cin>>a;
        v.push_back(make_pair(a, i+1));
    }
    sort(v.begin(), v.end());
    if (n==1) cout<<v[0].second<<"\n";
    else {
        if (v[0].first == v[1].first) cout<<"Still Rozdil\n";
        else cout<<v[0].second<<"\n";
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