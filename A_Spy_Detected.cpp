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
ll mod = 1e9 + 7;
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n, iter = -1;
    cin>>n;
    vector <ll> v(n); for (int i=0; i<n; i++) cin>>v[i];
    for (int i=1; i<n; i++){
        if (v[i]!=v[i-1]){
            iter = i; break;
        }
    }
    if (iter == 1){
        if (v[1]==v[2]) cout<<1<<"\n";
        else cout<<2<<"\n";
    }
    else cout<<iter+1<<"\n";
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