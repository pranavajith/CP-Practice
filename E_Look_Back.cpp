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

vector <ll> power2;

void solve(){
    ll n, ans = 0;
    cin>>n;
    vector <ll> v(n);
    for (int i=0; i<n; i++)cin>>v[i];
    if (n==1){
        cout<<0<<"\n";
        return;
    }
    for (int i=1; i<n; i++){
        if (v[i]>=v[i-1])continue;
        ll l = 0;
        ll r = 30;
        while (l<r){
            // cout<<"ok";
            ll mid = (l+r)/2;
            if (v[i] * power2[mid] >= v[i-1]) r = mid;
            else l = mid+1;
        }
        v[i]*=power2[l];
        ans+=l+1;
        // cout<<i<<" : "<<l+1<<" ";
    }
    cout<<ans<<"\n";
}

int main() 
{
    power2.push_back(2);
    for (ll i = 0; i<30; i++){
        power2.push_back(power2.back()*2);
    }
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    ll t; cin>>t; while(t--)
        solve();
    return 0;
}