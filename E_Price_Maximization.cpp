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
    ll n,k, ans = 0;
    cin>>n>>k;
    vector <ll> v(n);
    for (int i=0; i<n;i++){
        cin>>v[i];
        ans+=v[i]/k;
        v[i]%=k;
    }
    sort(v.begin(), v.end());
    ll a = 0, b = n-1;
    while (a<b){
        while (v[a]+v[b] < k && a < b)a++;
        if (a==b)break;
        ans++;
        a++; b--;
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