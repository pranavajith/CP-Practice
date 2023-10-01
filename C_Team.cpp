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
    ll n,m;
    cin>>n>>m;
    if (m>2*(n+1) || m<n-1)cout<<-1;
    else{
        if (m==n-1){
            cout<<0;n--;
        }
        while (m>(n) && m && n){
            m-=2;n-=1;
            cout<<110;
        }
        while (m && n){
            m--;n--;
            cout<<10;
        }
        while(m--){
            cout<<1;
        }
        while(n--){
            cout<<0;
        }
    }
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