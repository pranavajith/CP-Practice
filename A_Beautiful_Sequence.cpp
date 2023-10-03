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
    bool check = true;
    // vector <ll> v(n);
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        // cout<<a<<" "<<i+1<<"\n";
        if (check && a <= i+1){
            cout<<"YES\n";
            check = false;
        }
    }
    if (check) cout<<"NO\n";
    
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