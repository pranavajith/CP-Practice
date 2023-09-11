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
    ll n;
    cin>>n;
    if (n==1){
        cout<<1<<endl;
    }
    else if (n==2){
        cout<<-1<<endl;
    }
    else{
        ll temp=1;
        for (int i=1;i<=n;i++){
            for (int j=1;j<=n;j++){
                cout<<temp<<" ";
                if (temp==n*n-1 || temp==n*n){
                    temp=2;
                }
                else{
                    temp+=2;
                }
            }
            cout<<endl;
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