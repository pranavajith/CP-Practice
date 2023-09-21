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
    if (n%2){
        cout<<"Yes\n";
        ll k = 2*n;
        for (int i=1;i<=n;i+=2){
            cout<<i<<" "<<k--<<"\n";
        }
        for (int i=2;i<n;i+=2){
            cout<<i<<" "<<k--<<"\n";
        }
    }
    else cout<<"No\n";
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