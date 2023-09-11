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
    ll count_left = 0, count_ques=0;
    // cin>>n;
    string s;
    cin>>s;
    if (s.size()%2 || s[0]==')' || s[s.size()-1]=='(')cout<<"NO"<<"\n";
    else cout<<"YES"<<"\n";
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