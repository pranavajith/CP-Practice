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
    ll n,k;
    cin>>n>>k;
    vector <ll> v(n);
    for (int i=0; i<n; i++)cin>>v[i];
    sort(v.begin(), v.end());
    ll ans = 0, iter = 0;
    ll cursum = accumulate(v.begin(), v.end(), 0LL);
    while (v.size()>0){
        ll lol = 0;
        if (k - (cursum + iter*(ll)v.size()) >=0) lol = (max(0LL, (k - (cursum + iter*(ll)v.size()))/(ll)v.size() + 1));
        ans+=lol*(v.size());
        iter += lol;
        cursum -=v.back();
         v.pop_back();
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