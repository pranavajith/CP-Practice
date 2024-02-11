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

set <ll> pow2;

void solve(){
    ll n;
    cin>>n;
    vector <ll> v(n);
    for (int i=0; i<n; i++) cin>>v[i];
    ll avg = accumulate(v.begin(), v.end(), 0LL);
    if (avg % n != 0){
        cout<<"No\n";
        return;
    }
    avg /= n;   
    for (int i=0; i<n; i++) v[i] = avg - v[i];
    map <ll,ll> x,y;
    for (int i=0; i<n; i++){
        ll k = 1;
        if (v[i]==0) continue;
        while (k <= v[i] || pow2.find(k - v[i]) == pow2.end()) {
            k*=2;
            if (k==pow(2,33)) {
                cout<<"No\n";
                return;
            }
        }
        x[k]++; y[k-v[i]]++;
    }
    if (x.size() != y.size()){
        cout<<"No\n";
        return;
    }
    for (auto d:x){
        if (y[d.first] != d.second){
            cout<<"No\n";
            return;
        }
    }
    cout<<"Yes\n";
}

int main() 
{
    for (ll i=1; i<=pow(2,32); i*=2) pow2.insert(i);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    ll t; cin>>t; while(t--)
        solve();
    return 0;
}