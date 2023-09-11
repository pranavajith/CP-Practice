#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
using namespace std;
#define ll long long

void solve(){
    string s;
    cin>>s;
    ll lever = 0;
    vector <ll> v;
    for (int i=0;i<s.size();i++){
        if (s[i]=='^')lever = i;
        else if (s[i]!='=')v.push_back(i);
    }
    ll sum=0;
    // cout<<lever<<endl;
    for (auto d:v){
        // cout<<d<<" ";
        sum+=(d-lever)*(s[d]-'0');
        // cout<<
    }
    
    if (sum==0){
        cout<<"balance"<<endl;
    }
    else if(sum>0){
        cout<<"right"<<endl;
    }
    else{
        cout<<"left"<<endl;
    }
}

int main() 
{

        solve();
    
    return 0;
}