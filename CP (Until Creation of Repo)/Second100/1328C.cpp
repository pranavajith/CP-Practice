#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <algorithm>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n;
    cin>>n;
    string s, s1="", s2="";
    bool flag = true;
    cin>>s;
    for (auto d:s){
        if (d=='2'){
            if (flag){
            s1+='1';s2+='1';
            }
            else{
                s1+='0';
                s2+='2';
            }
        }
        else if (d=='0'){
            s1+='0';s2+='0';
        }
        else{
            if (flag){
                flag = false;
                s1+='1';
                s2+='0';
            }
            else{
                s1+='0';
                s2+='1';
            }
        }
    }
    cout<<s1<<"\n"<<s2<<"\n";
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