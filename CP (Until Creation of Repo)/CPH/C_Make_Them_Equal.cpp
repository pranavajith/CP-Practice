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
    ll a;
    cin>>a;
    char c;
    cin>>c;
    string s;
    cin>>s;
    if (count(s.begin(),s.end(),c)==a)cout<<0<<"\n";
    else if (s[s.size()-1]==c){
        cout<<1<<"\n";
        cout<<a<<"\n";
    }
    else{
        bool flag = false;
        ll check = 0;
        for (int i=a/2;i<a;i++){
            if (s[i]==c){
                flag = true;
                check = i+1;
            }
        }
        if (flag){
            cout<<1<<"\n"<<check<<"\n";
        }   
        else{
        cout<<2<<"\n";
        cout<<a<<" "<<a-1<<"\n";}
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