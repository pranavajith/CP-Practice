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
    ll a,b;
    cin>>a>>b;
    string s;
    cin>>s;
    vector <ll> v;
    map<ll,ll> m;
    for (int i=0;i<b;i++){
        ll w;
        cin>>w;
        v.push_back(w-1);
        m[w-1]++;
    }
    sort(v.begin(),v.end());
    vector <ll> sol(26,0);
    
    ll add = 1, check = b-1;
    for (int i=a-1;i>=0;i--){
        // cout<<"hey! "<<i<<" <- i ";
        if (v[b]==i){
            add+=m[v[b]];
            b--;
        }
        sol[s[i]-'a']+=add;
    }

    for (int i=0;i<26;i++)cout<<sol[i]<<" ";
    cout<<"\n";
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}