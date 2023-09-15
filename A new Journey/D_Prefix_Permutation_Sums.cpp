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

// ll n;

bool isPerm(vector <ll> v){
    for (int i=0;i<v.size();i++){
        if (v[i]>v.size() || v[i]<=0)return false;
    }
    set <ll> s(v.begin(),v.end());
    if (s.size()==v.size())return true;
    return false;
}

void solve(){
    ll n;
    cin>>n;
    vector <ll> v;
    for (int i=0;i<n-1;i++){
        ll a;
        cin>>a;
        v.push_back(a);
    }
    if (v[n-2]!=n*(n+1)/2){
        v.push_back(n*(n+1)/2);
        vector <ll> v2;
        v2.push_back(v[0]);
        for (int i=0;i<n-1;i++){
            v2.push_back(v[i+1]-v[i]);
        }
        if (isPerm(v2))cout<<"YES\n";
        else cout<<"NO\n";
    }
    else{   
        map <ll,ll> m;
        m[v[0]]++;
        for (int i=1;i<n-1;i++){
            m[v[i]-v[i-1]]++;
        }
        vector <ll> v3;
        for (auto d:m){
            if (d.second > 1){
                v3.push_back(d.first);
            }
        }
        if (v3.size()>1){
            cout<<"NO\n";
            return;
        }
        // if (m[v3[0]]>2 || m[v3[1]]>2){
        //     cout<<"NO\n";
        //     return;
        // }
        for (int i=0;i<v3.size();i++){
            if (m[v3[i]] > 2){
                cout<<"NO\n";
                return;
            }
        }
        vector <ll> v4;
        for (int i=1;i<=n;i++){
            if (m[i]==0)v4.push_back(i);
        }
        if (v4.size()!=2){
            cout<<"NO\n";
            return;
        }
        cout<<"YES\n";
        return;
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