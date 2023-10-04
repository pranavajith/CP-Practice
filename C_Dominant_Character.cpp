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
    string s;
    cin>>s;
    vector <ll> v;
    for (int i=0;i<n;i++){
        if (s[i]=='a')v.push_back(i);
    }
    if (v.size()==1 || v.size()==0)cout<<-1<<"\n";
    else{
        for (int i=0;i<v.size()-1;i++){
            if (v[i]+1==v[i+1]){
                cout<<2<<"\n";
                return;
            }
        }
        for (int i=0;i<v.size()-1;i++){
            if (v[i]+2==v[i+1]){
                cout<<3<<"\n";
                return;
            }
        }
        for (int i=0;i<v.size()-1;i++){
            if (v[i]+3==v[i+1] && s[v[i]+1] != s[v[i]+2]){
                cout<<4<<"\n";
                return;
            }
        }
        // for (auto d:v)cout<<d<<" ";
        for (int i=0;i<v.size()-2;i++){
            if (v[i]+3==v[i+1] && v[i+1]+3==v[i+2] && s[v[i]+1] == s[v[i]+2] && s[v[i+1]+1] == s[v[i+1]+2] && s[v[i]+1] != s[v[i+1]+2]){
                cout<<7<<"\n";
                return;
            }
        }
        cout<<-1<<"\n";
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