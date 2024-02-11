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
const ll N = 5e6;

vector <ll> sieve(N+1);
vector <ll> prefsum(N+1);

void precalc(){
    for (int i=2; i<=N; i++) sieve[i] = i;
    for (ll i = 2; i<=N; i++) {
        if (sieve[i] == i) {
            for (ll j = i*i; j<= N; j+=i) {
                sieve[j] = i;
            }
        }
    }
    prefsum[0] = 0;
    prefsum[1] = 0;
    for (ll i=2; i<=N; i++) {
        ll cnt = 0;
        ll j = i;
        while (j!=1) {
            cnt++;
            j /= sieve[j];
        }
        prefsum[i] = prefsum[i-1] + cnt;
    }
}

void solve(){
    ll a,b;
    cin>>a>>b;
    cout<<prefsum[a] - prefsum[b]<<"\n";
}   

int main() 
{
    precalc();
    // cout<<prefsum[6]<<"!\n";
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    ll t; cin>>t; while(t--)
        solve();
    return 0;
}