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
    vector <ll> v(n);

    vector <ll> empty;
    for (int i=0; i<n; i++){
        cin>>v[i];
        if (v[i]==0)empty.push_back(i);
    }
    map <ll,ll> m;
    for (int i=0; i<n; i++){
        m[v[i]]++;
    }
    vector <ll> noGifts;
    for (int i=1; i<=n; i++){
        if (m[i]==0)noGifts.push_back(i);
    }

    sort(noGifts.rbegin(), noGifts.rend());
    ll a = 0;
    for (int i=0; i<n; i++){
        if (v[i]==0)v[i]=noGifts[a++];
    }
    for (int i=1; i<empty.size(); i++){
        if (v[empty[i]] == empty[i]+1){
            // cout<<"ok";
            swap(v[empty[i]], v[empty[i-1]]);
        }
    }
    if (v[empty[0]] == empty[0]+1)swap(v[empty[0]], v[empty[empty.size()-1]]);
    for (auto d:v)cout<<d<<" ";
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