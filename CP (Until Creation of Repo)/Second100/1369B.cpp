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

ll check(string s){
    ll count1=0;
    for (int i=0;i<s.size()-1;i++){
        if (s[i]=='1' && s[i+1]=='0')count1++;
    }
    return count1;
}

void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    // while(check(s)){
    //     for (int i=0;i<s.size()-1;i++){
    //         if (s[i]=='1' && s[i+1]=='0'){
    //             if (i==s.size()-2){
    //                 s=s.substr(0,s.size()-2)+'0';
    //             }
    //             else{
    //                 if (s[i+2]=='1'){
    //                     s=s.substr(0,i)+s.substr(i+1,s.size()-i-1);
    //                 }
    //                 else{
    //                     s=s.substr(0,i+1)+s.substr(i+2,s.size()-i-2);
    //                 }
    //             }
    //         }
    //     }
    //     // cout<<s<<"\n";
    // }
    ll init0 = 0, fin1=0;
    for (int i=0;i<n;i++){
        if (s[i]!='0')break;
        init0++;
    }
    for (int i=n-1;i>=0;i--){
        if (s[i]!='1')break;
        fin1++;
    }
    if (n-fin1 == init0){
        cout<<s<<"\n";
    }
    else{
        cout<<s.substr(0,init0)+'0'+s.substr(n-fin1,fin1)<<"\n";
    }
    // cout<<s<<"\n";
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