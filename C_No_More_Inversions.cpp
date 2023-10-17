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
    // if (n-k == k-1){
    //     cout<<k<<" ";
    //     for (int i=1; i<k; i++)cout<<i<<" ";cout<<"\n";
    //     return;
    // }
    // vector <ll> v(k, 1);
    // for (int i=1; i<n; i++){
    //     v[i]=v[i-1]+1;
    // }
    // swap(v[k-1], v[k-1-(n-k)]);
    // for (int i=0; i<k; i++)cout<<v[i]<<" ";cout<<"\n";
    ll iter = k;
    for (int i=1; i<=k; i++){
        if (n-k + i < k) cout<<i<<" ";
        else cout<<iter--<<" ";
    }
    cout<<"\n";
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