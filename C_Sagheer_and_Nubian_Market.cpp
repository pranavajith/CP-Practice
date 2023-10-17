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

ll sol(vector <ll> v, ll mid){
    ll ans = 0;
    vector <ll> temp;
    for (int i=0; i<v.size(); i++){
        temp.push_back(v[i]+(i+1)*mid);
    }
    sort(temp.begin(), temp.end());
    for (int i=0; i<mid; i++){
        ans+=temp[i];
    }
    return ans;
}

void solve(){
    ll n,k;
    cin>>n>>k;
    vector <ll> v(n);
    for (int i=0; i<n; i++ )cin>>v[i];
    ll l = 0, r = n+1;
    while (l<r-1){
        // cout<<"ok!";
        ll mid = (l+r)/2;
        if (sol(v, mid) <= k)l = mid;
        else r = mid;
    }
    cout<<l<<" "<<sol(v, l)<<"\n";

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