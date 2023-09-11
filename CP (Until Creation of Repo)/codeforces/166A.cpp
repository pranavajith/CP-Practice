#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
using namespace std;
#define ll long long

bool sort_sec(vector <ll>& v1, vector <ll>& v2){
    return v1[1]<v2[1];
}

void solve(){
    ll n,k;
    cin>>n>>k;
    map <ll, vector <vector <ll> > > m;
    for (int i=0;i<n;i++){
        ll a,b;
        cin>>a>>b;
        vector <ll> v;
        v.push_back(a);
        v.push_back(b);
        m[a].push_back(v);
    }
    for (auto it = m.begin();it!=m.end();it++){
        vector < vector <ll> > v1 = it->second;
        sort(it->second.begin(),it->second.end(),sort_sec);
    }
    for (auto d:m){
        cout<<d.second.size()<<" ";
    }
    ll count1=0;
    for (auto it = m.rbegin();it!=m.rend();it++){
        count1+=it->second.size();
        if (count1>=k){
            cout<<it->second.size()<<endl;
            break;
        }
    }
}

int main() 
{

        solve();
    
    return 0;
}