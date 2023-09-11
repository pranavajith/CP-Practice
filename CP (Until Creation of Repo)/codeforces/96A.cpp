#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
using namespace std;
#define ll long long

void solve(){
    string s;
    cin>>s;
    ll count = 0;
    if (s.size()>=7){
    for (ll i=0;i<s.size()-6;i++){
        if ((s.substr(i,7)=="1111111") || (s.substr(i,7)=="0000000") ){
            count++;
            break;
        }
    }
    if (count)cout<<"YES"<<endl;
    else{
        cout<<"NO"<<endl;
    }
    }
    else{
        cout<<"NO"<<endl;
    }
}

int main() 
{

        solve();
    
    return 0;
}