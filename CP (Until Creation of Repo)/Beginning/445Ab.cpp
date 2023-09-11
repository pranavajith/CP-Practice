#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
using namespace std;
#define ll long long

void solve(){
    ll n,m;
    cin>>n>>m;
    vector <vector <ll> > v;
    ll c=0;
    for (int i=0;i<n;i++){
        vector <ll> v1;
        for(int j=0;j<=(m/2+1)*2;j++){
            v1.push_back(c);
            v1.push_back((c+1)%2);
        }
        c=(c+1)%2;
        v.push_back(v1);
    }
    for (int i=0;i<n;i++){
        string s;
        cin>>s;
        for (int j=0;j<s.size();j++){
            if (s[j]=='-'){
                v[i][j]=2;
            }
        }
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            ll d = v[i][j];
            if (d==0)cout<<"W";
            if (d==1)cout<<"B";
            if (d==2)cout<<"-";
        }
        cout<<endl;
    }
}

int main() 
{

        solve();
    
    return 0;
}