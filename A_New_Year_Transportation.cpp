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
    for (int i=0;i<n-1;i++)cin>>v[i];
    if (k==n){
        cout<<"YES\n";
        return;
    }
    ll iter = 0;
    // cout<<iter<<" ";
    while (iter<n-1){
        // cout<<iter<<" ";
        if (iter+1 == k){
            cout<<"YES\n";
            return;
        }
        iter+=v[iter];
        char c;
        cin>>c;
        
    }
    cout<<"NO\n";
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