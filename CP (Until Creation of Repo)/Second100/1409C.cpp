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
    ll n,x,y;
    cin>>n>>x>>y;
    if (n>=(y-x+1)){
        if (n<=y){
            for (int i=1;i<=n;i++){
                cout<<y-(n-i)<<" ";
            }
            cout<<"\n";
        }
        else{
            for (int i=1;i<=n;i++){
                cout<<i<<" ";
            }
            cout<<"\n";
        }
    }
    else{
        if ((y-x)%(n-1)==0){
            ll d = (y-x)/(n-1);
            while (x<=y){
                cout<<x<<" ";
                x+=d;
            }
            cout<<"\n";
        }
        else{
            // ll d = y-x;
            ll k;
            for (int k1=n-1;k1>=0;k1--){
                // cout<<k1<<"\n";
                if ((y-x)%k1==0){
                    k=k1;
                    // cout<<k<<"\n";
                    break;
                }
            }
            ll d=(y-x)/k;
            // cout<<d<<"\n";
            if (y-(n-1)*d>=1){
                for (int i=y-(n-1)*d;i<=y;i+=d){
                    cout<<i<<" ";
                }
                cout<<"\n";
            }
            else{
                ll k = floor((y-1)/d +1);
                ll count1=0;
                ll first = y - (k-1)*d;
                for (int i=0;i<n;i++){
                    cout<<first + i*d<<" ";
                }
                cout<<"\n";
            }
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