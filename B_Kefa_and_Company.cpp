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
    ll n,d;
    cin>>n>>d;
    vector <pair<ll,ll> > v;
    for (int i=0;i<n;i++){
        ll a, b;
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(), v.end());
    ll a=0, b=0, maxfr = 0, curfr = 0;
    while (a<n && b<n){
        while (b<n && abs(v[b].first - v[a].first) < d){
            curfr += v[b].second;
            b++;
        }
        maxfr = max(maxfr, curfr);
        if (b==n)break;
        curfr -= v[a].second;
        a++;
    }
    cout<<maxfr<<"\n";
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