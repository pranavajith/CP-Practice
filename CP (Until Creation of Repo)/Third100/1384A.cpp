#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <algorithm>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

string print_cont(ll a, char c){
    string s = "";
    for (int i=0;i<a;i++)s+=c;
    return s;
}

void solve(){
    ll n;
    cin>>n;
    vector <ll> v;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        v.push_back(a);
    }
    ll maxel = *max_element(v.begin(),v.end());
    maxel++;
    string s1 = print_cont(maxel,'a');
    
    cout<<s1<<"\n";
    for (int i=0;i<n;i++){
        string b="";
        b+=s1.substr(0,v[i]);
        // cout<<"\n"<<v[i]<<" "<<s1.substr(0,v[i])<<" "<<print_cont(maxel-v[i],'a'+(i+1)%25+1)<<" ";
        if (s1[v[i]]=='z')b+=print_cont(maxel-v[i],'a');
        else b+=print_cont(maxel-v[i],s1[v[i]]+1);
        cout<<b;
        cout<<"\n";
        s1=b;

    }
    
}

int main() 
{
    // TxtIO;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}