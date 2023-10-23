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

vector <ll> p(1e7, 0);
ll len;

ll query(ll l){
    return p[len] * 1ll *(l/len) + p[l%len];
}



void solve(){
    ll a,b,q;
    cin>>a>>b>>q;
    len = a*b;
    p[0] = 0;
    for (ll i=1; i<=len; i++){
        p[i]=p[i-1];
        if ((i%a)%b != (i%b)%a){
            p[i]++;
        }
    }
    ll l,r;
    while (q--){
        cin>>l>>r;
        cout<<query(r) - query(l-1)<<" ";
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