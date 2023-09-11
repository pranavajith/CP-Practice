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
    ll n, big_count=0;
    cin>>n;
    string s;
    cin>>s;
    for (int i=0;i<n;i++){
        if (s[i]==')')big_count++;
        if (s[i]=='('){
            // cout<<"hi!";
            bool check = true;
            for (int j=i+1;j<n;j++){
                if (s[j]==')'){
                    s[j]='0';
                    check = false;
                    break;
                }
            }
            if (check){
                    big_count++;
                }
        }
    }
    cout<<big_count/2<<"\n";
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