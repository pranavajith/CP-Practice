#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <algorithm>
#include <limits>
#include <iomanip>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    string n;
    cin>>n;
    ll a = 0, n1=0;
    for (int i=0;i<n.size();i++){
        if (n[i]>'1'){
            // if (i==0)n1==1;
            // cout<<n.size()-i<<" here! ";
            for (int j=0;j<n.size()-i;j++){
                n1=n1*10+1;
            }
            break;
        }
        else{
            n1 = n1*10 + n[i]-'0';
        }
    }
    // cout<<floor(log10(n1)+1)<<"\n";
    ll sol=0;
    ll n2=n1;
    for (int i=0;i<floor(log10(n2)+1);i++){
        // cout<<i<<" "<<pow(2,i)*(n1%10)<<"\n";
        sol+=pow(2,i)*(n1%10);
        n1/=10;
    }
    cout<<sol<<"\n";

}

int main() 
{
    // TxtIO;
    // ll t;
    // cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}