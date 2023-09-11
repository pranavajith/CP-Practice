#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <numeric>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

ll gcd(ll a, ll b)
{
  ll a1=max(a,b);
  ll b1=min(a,b);
  ll temp=1;
  while (temp){
    temp=a1%b1;
    a1=b1;
    b1=temp;
  }
    return a1;
}

// In code, write "ll lcm = n1*n2/gcd(n1,n2)"
void solve(){
    string s1,s2;
    cin>>s1>>s2;
    ll n=s1.size(),m=s2.size();
    ll lcm = n*m/gcd(n,m);
    // cout<<lcm<<endl;
    // cout<<gcd(n,m)<<" GCD"<<endl;
    n=lcm/n;m=lcm/m;
    string s3="",s4="";
    for (int i=0;i<n;i++){
        s3+=s1;
    }
    for (int i=0;i<m;i++){
        s4+=s2;
    }
    if (s4==s3)cout<<s3<<endl;
    else cout<<-1<<endl;
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