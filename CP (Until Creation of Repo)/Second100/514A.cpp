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
    string s, s1="";
    cin>>s;
    // if (count(s.begin(),s.end(),'9')== s.size()){
    //     cout<<9;
    //     if (s.size()>1){
    //     for (int i=0;i<s.size()-2;i++){
    //         cout<<0;
    //     }}
    //     cout<<"\n";
    // }
    // else{
    for (int i=0;i<s.size();i++){
        char d = s[i];  
        if (i==0 && d=='9')s1+=d;
        // cout<<d-'0'<<"\n";
        else if ((d-'0')<=4){
            s1+=d;
        }
        else{
            s1+=to_string(9-(d-'0'));
        }
    }
    cout<<(s1)<<"\n";
    // }
}

int main() 
{
    // lTxtIO;
    // ll t;
    // cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}