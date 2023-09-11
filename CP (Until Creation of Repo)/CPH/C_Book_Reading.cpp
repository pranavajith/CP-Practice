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
    long long int n,m, sum1=0;
    cin>>n>>m;
    // if (n<m)cout<<0<<"\n";
    // else if (n<=10*m){
    //     long long int a=0;
    //     for (long long int i=m;i<=n;i++){
    //         if (i%m==0)a+=i%10;
    //     }
    //     cout<<a<<"\n";
    // }
    // else{
        n/=m;
        vector <ll> digit(10);
        for (int i=0;i<10;i++){
            digit[i]=((i+1)*m)%10;
        }
        for (int i=0;i<n%10;i++){
            sum1+=digit[i];
        }
        cout<<sum1+(n/10)*accumulate(digit.begin(),digit.end(),0LL)<<"\n";

    

    // m*=10;
    // long long int factor = n/(m*10);
    // m10*=factor;
    // // cout<<m10<<" before ";
    // for (long long int i=factor*m*10+1;i<=n;i++){
    //     if (i%m==0)m10+=i%10;
    // }
    // cout<<m10<<"\n";
    // }
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