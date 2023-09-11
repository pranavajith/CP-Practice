#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <string>
#include <sstream>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

bool isPrime(int a){
    if (a<=1)return false;
    if (a==2 || a==3)return true;
    for (int i=2;i<=a/2;i++){
        if (a%i==0) return false;
    }
    return true;
} 


void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    // bool check = false;
    for (auto d:s){
        if (!isPrime(d-'0')){
            cout<<1<<"\n"<<d-'0'<<"\n";
            // cout<<isPrime(7);
            // cout<<"lol";
            return;
        }
    }
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if (i!=j){
        int s1 = (s[i]-'0')*10 + s[j]-'0';
        if (!isPrime((s1))){
            cout<<2<<"\n"<<(s1)<<"\n";
            // cout<<"lol";
            return;
        }
    }
        }
    }
    cout<<n<<"\n"<<s<<"\n";
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