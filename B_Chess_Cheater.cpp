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
    ll n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    vector <ll> v;
    for (int i=0; i<n; i++){
        if (s[i]=='W')v.push_back(i);
        // else if (v[i]=='W')
    }
    // cout<<"ok";
    // for (auto d:v)cout<<d<<" "; cout<<"\nlol\n";
    for (int i=1; i<v.size(); i++){
        // cout<<v[i]<<"\n";
        if ((v[i]-v[i-1]) <= m+1){
            // cout<<"yes";
            m-=(v[i]-v[i-1]-1);
            for (int j = v[i-1]+1; j<v[i]; j++)s[j]='W';
        }
        // else break;
    }
    // cout<<"yay\n";
    ll i = 1;
    while (i<n){
        if (m==0)break;
        // cout<<"ok";
        if (s[i]=='L' && s[i-1]=='W'){
            s[i]='W';
            m--;
        }
        i++;
    }
    i = 0;
    while (i<n-1){
        if (m==0)break;
        // cout<<"ok";
        if (s[i]=='L' && s[i+1]=='W'){
            s[i]='W';
            m--;
        }
        i++;
    }
    i = 0;
    while (i<n){
        if (m==0)break;
        if (s[i]=='L'){
            s[i]='W'; m--;
        }
        i++;
    }
    ll ans = 0;
    if (s[0]=='W')ans++;
    for (int i = 1; i<n; i++){
        if (s[i]=='W'){
            if (s[i-1]=='L')ans++;
            else ans+=2;
        }
    }
    cout<<ans<<"\n";
    // cout<<s<<"\n";
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