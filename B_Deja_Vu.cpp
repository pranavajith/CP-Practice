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

vector <ll> pow2;

void solve(){
    ll n,q;
    cin>>n>>q;
    vector <ll> v, indpow, qbig;
    for (int i=0; i<n; i++){
        ll a; cin>>a;
        v.push_back(a);
        ll count1 = 0;
        while (a%2==0) {
            a/=2; count1++;
        }
        indpow.push_back(count1);
    }
    ll prev; cin>>prev;
    qbig.push_back(prev);
    for (int i=0; i<q-1; i++){
        ll a;
        cin>>a;
        if (a<prev){
            qbig.push_back(a);
            prev = a;
        }
    }
    q = qbig.size();
    // for (auto d:qbig)cout<<d<<" "; cout<<"\n";
    for (int i=0; i<q; i++){
        for (int j=0; j<n; j++){
            if (indpow[j] >= qbig[i]){
                indpow[j] = qbig[i] - 1;
                v[j]+=pow2[qbig[i]-1];
            }
        }
    }
    for (int i=0; i<n; i++) cout<<v[i]<<" "; cout<<"\n";
}

int main() 
{
    pow2.push_back(1);
    for (int i=0; i<30; i++){
        pow2.push_back(pow2.back()*2);
    }
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    ll t; cin>>t; while(t--)
        solve();
    return 0;
}