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
    ll n, maxel = -1;
    cin>>n;
    map <ll,ll> m;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        m[a]++;
        maxel = max(a,maxel);
    }
    for (int i=0;i<maxel;i++){
        if (m[i+1]>m[i]){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
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