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
    ll n;
    cin>>n;
    vector <ll> pre(n);
    for (int i=0; i<n; i++){
        ll a;
        cin>>a;
        if (i==0)pre[i]=a;
        else pre[i] = pre[i-1]^a;
        // cout<<pre[i]<<" ";
    }
    // cout<<pre[n-1];
    bool check = !pre[n-1];
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            check |= (pre[i]==(pre[j]^pre[i])) && ((pre[n-1]^pre[j])==((pre[j]^pre[i])));
            if (check)break;
        }
    }
    if (check)cout<<"YES\n";
    else cout<<"NO\n";
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