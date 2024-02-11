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

const ll N = 50000;
bool isPrime[N+1];
vector <ll> primes;

void precalc() {
    fill (isPrime+2, isPrime+N, true);
    for (ll i = 2; i <= N; i++){
        for (ll j=i*i; j<=N; j+=i){
            isPrime[j] = false;
        }
    }
    for (int i=2; i<=N; i++){
        if (isPrime[i]) primes.push_back(i);
    }
}

map <ll,ll> decompose(ll n){
    map <ll,ll> m;
    for (auto i:primes) {
        if (i*i > n) break;
        while (n%i == 0) {
            n/=i;
            m[i]++;
        }
    }
    if (n!=1) m[n]++;
    return m;
}

ll gcd(ll a, ll b){
    if (b==0) return a;
    return gcd(b, a%b);
}

void solve(){
    ll a,b,k;
    cin>>a>>b>>k;
    ll minreq, maxreq;
    if (k==1 && a==b) {
        cout<<"NO\n";
        return;
    }
    map <ll,ll> adiv = decompose(a);
    map <ll,ll> bdiv = decompose(b);
    ll divcounta = 0, divcountb = 0;
    for (auto d:adiv) {
        divcounta += d.second;
    }
    for (auto d:bdiv) {
        divcountb += d.second;
    }
    if (gcd(a,b) == a || gcd(a,b) == b) minreq = 1;
    else minreq = 2;
    maxreq = divcounta + divcountb;
    if (k>= minreq && k<= maxreq) cout<<"YES\n";
    else cout<<"NO\n";
}

int main() 
{   
    precalc();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    ll t; cin>>t; while(t--)
        solve();
    return 0;
}