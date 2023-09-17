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
    ll n,m, count1=0;
    cin>>n>>m;
    vector <ll> v;
    set <ll> s;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        v.push_back(a);
    }
    vector <ll> v1(n);
    for (int i=n-1;i>=0;i--){
        if (s.find(v[i])==s.end()){
            s.insert(v[i]);
            count1++;
        }
        v1[i]=count1;
    }
    while (m--){
        ll a;
        cin>>a;
        cout<<v1[a-1]<<"\n";
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