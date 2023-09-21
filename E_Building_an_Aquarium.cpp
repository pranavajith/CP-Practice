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

ll find_vol(vector <ll> v, ll h){
    ll ans = 0;
    for (int i=0;i<v.size();i++){
        // cout<<v[i];
        ans+=max(0LL, h-v[i]);
    }
    // cout<<"yay!"<<ans;
    return ans;
}

void solve(){
    ll n,x;
    cin>>n>>x;
    vector <ll> v;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    // for (auto d:v)cout<<d<<" ";
    ll l = 0, r = 1e10;
    while (l<=r){
        ll mid = (l+r)/2;
        // cout<<find_vol(v,mid)<<" "<<x<<" !\n";
        if (find_vol(v,mid) > x)r=mid-1;
        else l=mid+1;
        // cout<<"hi";
    }
    cout<<l-1<<"\n";
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