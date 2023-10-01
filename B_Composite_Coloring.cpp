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

ll mindiv(ll a){
    for (int i=2;i*i<=a;i++){
        if (a%i==0)return i;
    }
    return -1;
}

void solve(){
    ll n;
    cin>>n;
    vector <ll> v;
    set <ll> s;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        v.push_back(mindiv(a));
        s.insert(v.back());
    }
    // cout<<s.size()<<"\n";
    map <ll,ll> m;
    ll count1=1;
    for (auto d:s){
        m[d]=count1++;
    }
    cout<<s.size()<<"\n";
    for (auto d:v){
        cout<<m[d]<<" ";
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