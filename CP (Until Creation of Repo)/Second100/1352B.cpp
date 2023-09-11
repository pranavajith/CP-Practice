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
    ll n,k;
    cin>>n>>k;
    if (n%2==0 && k%2==0){
        if (n>=k){
            cout<<"YES\n";
            for (int i=0;i<k-1;i++){
                cout<<1<<" ";
            }
            cout<<n-k+1<<"\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    else if (n%2==0 && k%2==1){
        if (n>=2*k){
            cout<<"YES\n";
            for (int i=0;i<k-1;i++){
                cout<<2<<" ";
            }
            cout<<n-2*k+2<<"\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    else if (n%2==1 && k%2==0){
        cout<<"NO\n";
    }
    else{
        if (n>=k){
            cout<<"YES\n";
            for (int i=0;i<k-1;i++){
                cout<<1<<" ";
            }
            cout<<n-k+1<<"\n";
        }
        else{
            cout<<"NO\n";
        }
    }
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