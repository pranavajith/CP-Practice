#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long

void solve(){
    string s;
    cin>>s;
    if(s.size()>10){
        cout<<s[0]+ to_string(s.size()-2)+s[s.size()-1]<<endl;
    }
    else{
        cout<<s<<endl;
    }
}

int main() 
{
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}