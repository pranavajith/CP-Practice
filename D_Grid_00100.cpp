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

void solve(){
    ll n,k;
    cin>>n>>k;
    vector < vector <ll> > v(n, vector <ll> (n,0));
    ll p = 0, q = 0;
    for (int i=0; i<k; i++){
        v[p][q]=1;
        p++; 
        q++; q%=n;
        if (p==n){
            p=0;
            q++; q%=n;
        }
    }
    if (k%n==0)cout<<0<<"\n";
    else cout<<2<<"\n";
    for (auto d:v){
        for (auto d1 : d)cout<<d1; cout<<"\n";
    }
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