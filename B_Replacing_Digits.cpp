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
    string s1,s2;
    cin>>s1>>s2;
    // ll n = s1.size();
    // s1+=s2;
    vector <char> v;
    for (int i=0;i<s2.size();i++){
        v.push_back(s2[i]);
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    // for (int i=0;i<n;i++)cout<<v[i];
    ll a=0, b=0;
    while (a<s1.size() && b<v.size()){
        while (a<s1.size() && s1[a]>=v[b])a++;
        if (a==s1.size())break;
        s1[a]=v[b];
        b++;
        // if (b==v.size())
    }
    cout<<s1;
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