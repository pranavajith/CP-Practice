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
    ll n,k;
    string s1,s2;
    cin>>n>>k>>s1>>s2;
    map <char, ll> m1, m2;
    for (int i=0;i<n;i++)m1[s1[i]]++;
    for (int i=0;i<n;i++)m2[s2[i]]++;
    for (auto d:m2){
        if (m1[d.first]>=m2[d.first]){
            m1[d.first]-=d.second;
            m2[d.first]=0;
        }

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