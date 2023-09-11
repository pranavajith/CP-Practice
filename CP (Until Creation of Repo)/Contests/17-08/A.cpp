#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    string s;
    cin>>s;
    if (s=="()")cout<<"NO"<<endl;
    else{
        bool check1=false;
        cout<<"YES"<<endl;
    for (int i=0;i<s.size()-1;i++){
        if (s[i]==s[i+1])check1=true;
    }
    if (check1){
        for (int i=0;i<s.size();i++){
            cout<<"()";
        }
        cout<<endl;
    }
    else{
        ll lens = s.size();
        for (int i=0;i<lens;i++)cout<<'(';
        for (int i=0;i<lens;i++)cout<<')';
        cout<<endl;
    }
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