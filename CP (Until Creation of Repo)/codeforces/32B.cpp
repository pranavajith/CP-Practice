#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long

void solve(){
    string s;
    cin>>s;
    for (int i=0;i<s.size();i++){
        if (s.substr(i,2)=="-."){
            cout<<1;
            i++;
            }
        else if (s.substr(i,2)=="--"){
            cout<<2;
            i++;
            }
        else{
            cout<<0;
        }
    }
    cout<<endl;
}

int main() 
{

        solve();
    
    return 0;
}