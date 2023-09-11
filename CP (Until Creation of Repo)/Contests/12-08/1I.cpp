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
    string s;
    cin>>s;
    if (count(s.begin(),s.end(),'.')){
        string s1[3];
        ll a = 0;
        for (int i=0;i<s.size();i++){
            if (s[i]=='.')a++;
            else{
                s1[a]+=s[i];
            }
        }
        // cout<<s1[0]<<" "<<s1[1]<<" "<<s1[2];
        if (s1[0].size()==1){
            s1[0]='0'+s1[0];
        }
        if (s1[1].size()==1){
            s1[1]='0'+s1[1];
        }
        if (s1[2].size()==1){
            s1[2]="000"+s1[2];
        }
        else if (s1[2].size()==2){
            s1[2]="00"+s1[2];
        }
        else if (s1[2].size()==3){
            s1[2]='0'+s1[2];
        }
        cout<<s1[0]<<'.'<<s1[1]<<'.'<<s1[2]<<" "<<s1[1]<<'/'<<s1[0]<<'/'<<s1[2]<<"\n";
    }
    else{
        string s1[3];
        ll a = 0;
        for (int i=0;i<s.size();i++){
            if (s[i]=='/')a++;
            else{
                s1[a]+=s[i];
            }
        }
        // cout<<s1[0]<<" "<<s1[1]<<" "<<s1[2];
        if (s1[0].size()==1){
            s1[0]='0'+s1[0];
        }
        if (s1[1].size()==1){
            s1[1]='0'+s1[1];
        }
        if (s1[2].size()==1){
            s1[2]="000"+s1[2];
        }
        else if (s1[2].size()==2){
            s1[2]="00"+s1[2];
        }
        else if (s1[2].size()==3){
            s1[2]='0'+s1[2];
        }
        cout<<s1[1]<<'.'<<s1[0]<<'.'<<s1[2]<<" "<<s1[0]<<'/'<<s1[1]<<'/'<<s1[2]<<"\n";
    }
}

int main() 
{
    // TxtIO;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}