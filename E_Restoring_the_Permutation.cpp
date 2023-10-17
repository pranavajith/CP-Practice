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
    vector <ll> v(n), v1, v2;
    vector <bool> check1(n+1, false);
    vector <bool> check2(n+1, false);
    ll prev, iter1 = 1, vlol = 1;
    vector <ll> stacklol;
    for (int i=0; i<n; i++){
        cin>>v[i];
        if (i==0){
            v1.push_back(v[i]);
            // v2.push_back(v[i]);
            check1[v[i]]=true;
            while (vlol <= v[i])stacklol.push_back(vlol++);
            v2.push_back(stacklol.back()); stacklol.pop_back();
        }   
        else{
            if (v[i]==v[i-1]){
                while (check1[iter1])iter1++;
                v1.push_back(iter1);
                check1[iter1]=true;
                while (vlol<=v[i])stacklol.push_back(vlol++);
                v2.push_back(stacklol.back()); stacklol.pop_back();

            }
            else{
                v1.push_back(v[i]);
                while (vlol<=v[i])stacklol.push_back(vlol++);
                v2.push_back(stacklol.back()); stacklol.pop_back();
                check1[v[i]]=true;
            }
        }
    }
    for (auto d:v1)cout<<d<<" "; cout<<"\n";
    for (auto d:v2)cout<<d<<" "; cout<<"\n";
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