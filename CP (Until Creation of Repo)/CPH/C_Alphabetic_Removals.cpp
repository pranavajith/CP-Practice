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
    cin>>n>>k;
    string s;
    cin>>s;
    char check='a';
    map <char,ll> m;
    for (auto d:s){
        m[d]++;
        if (d>check)check = d;
    }
    int i;
    char w;
    for (i=0;i<26;i++){
        if (k==0){
            break;
        }
        if (k>=m[char('a'+i)]){
            // cout<<"k before:"<<k<<" ";
            k-=m[char('a'+i)];
            // cout<<" k after: "<<k<<"\n";
            m[char('a'+i)]=0; 
            w=char('a'+i);
            // cout<<"hey! "<<w<<" ";
        }
        else{
            w=char('a'+i);
            break;
        }
    }
    // cout<<w<<" "<<k<<"\n";
    if (i==25 && m[check]==0)cout<<""<<"\n";
    else{
        for (auto d:s){
            if (d==w && k){
                k-=1;
            }
            else if (d==w && m[w])cout<<d;
            else if (d>w)cout<<d;
        }
        cout<<"\n";
    }
}

int main() 
{
    // TxtIO;
    // ll t;
    // cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}