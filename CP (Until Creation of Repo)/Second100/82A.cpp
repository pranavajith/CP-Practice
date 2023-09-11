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
    ll n;
    cin>>n;
    ll a = floor(log2(n/5+1))+1;
    if ((pow(2,a-1)-1)*5==n){
        a-=1;
    }
    // cout<<a<<"\n";
    ll b = (pow(2,a-1)-1)*5;
    ll ind=n-b;
    // cout<<ind+1<<"\n";
    ll w = floor((ind-1)/pow(2,a-1));
    string s[] = {"Sheldon","Leonard","Penny","Rajesh","Howard"};
    cout<<s[w]<<"\n";
    

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