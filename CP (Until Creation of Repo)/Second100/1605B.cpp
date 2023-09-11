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
    ll n,count_one=0;
    cin>>n;
    string s;
    cin>>s;
    for (int i=0;i<n;i++){
        if (s[i]=='1')count_one++;
    }
    ll count_zero = 0;
    for (int i=n-1;i>=n-count_one;i--){
        if (s[i]=='0')count_zero++;
    }
    if (count_zero==0){
        cout<<0<<"\n";
    }
    else{
        cout<<1<<"\n";
        cout<<count_zero*2<<" ";
        for (int i=0;i<n;i++){
            if (i<n-count_one && s[i]=='1'){
                cout<<i+1<<" ";
            }
            else if (i>=n-count_one && s[i]=='0'){
                cout<<i+1<<" ";
            }
        }
    }
    cout<<"\n";
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