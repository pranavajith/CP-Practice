#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n;
    cin>>n;
    vector <ll> v(n);
    deque <ll> q;
    for (int i=0;i<n;i++)cin>>v[i];
    // cout<<q.size();
    for (int i=0;i<n;i++){
        if (q.size()==0){
            q.push_back(v[i]);
        }
        else{
            if (v[i]<=q.front())q.push_front(v[i]);
            else q.push_back(v[i]);
        }
    }
    for (auto it = q.begin();it!=q.end();it++){
        cout<<*it<<" ";
    }
}

int main() 
{
    // lTxtIO;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}