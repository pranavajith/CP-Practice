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
    string s;
    cin>>s;
    vector <ll> v;
    ll n, n1 = 0;
    v.push_back(0);
    for (int i=1;i<s.size();i++){
        if (s[i]==s[i-1])n1++;
        v.push_back(n1);
    }
    cin>>n;
    while (n--){
        ll a,b;
        cin>>a>>b;
        cout<<v[b-1]-v[a-1]<<"\n";
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