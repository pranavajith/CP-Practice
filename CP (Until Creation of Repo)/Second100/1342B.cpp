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
    string s;
    cin>>s;
    ll count1=0;
    for (auto d:s){
        if (d=='1')count1++;
    }
    ll count0=s.size()-count1;
    if (count1==0 || count1==s.size())cout<<s<<"\n";
    else{
        string s2="";
        if (s[0]=='1'){
            for (int i=0;i<s.size();i++){
                if (i==0)s2+=s[i];
                else if (s[i]=='1' && s[i-1]=='1'){
                    s2+="01";
                }
                else if (s[i-1]=='0' && s[i]=='0'){
                    s2+="10";
                }
                else{
                    s2+=s[i];
                    // cout<<"LOL: "<<s[i]<<"\n";
                }
            }
            cout<<s2<<"\n";
        }
        else{
            string s2="";
            for (int i=0;i<s.size();i++){
                if (i==0)s2+=s[i];
                else if (s[i-1]=='0' && s[i]=='0'){
                    s2+="10";
                }
                else if (s[i-1]=='1' && s[i]=='1'){
                    s2+="01";
                }
                else{
                    // cout<<"hi! ";
                    s2+=s[i];
                }
            }
            cout<<s2<<"\n";
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