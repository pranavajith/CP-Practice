#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;
    for (int i=0;i<=n;i++){
        for (int j=0;j<n-i;j++){
            cout<<"  ";
        }
        int j=0;
        for (j=0;j<=i-1;j++){
            cout<<j<<" ";
        }
        if (i==0){
            cout<<j;
        }
        else{
            cout<<j<<" ";
        }
        // cout<<j;
        if (i!=0){
            j=i-1;
            for (j=i-1;j>=1;j--){
                cout<<j<<" ";
            }
            cout<<j;
        }
        cout<<endl;
    }
    for (int i=n-1;i>=0;i--){
        int j = 0;
        for (j=0;j<n-i;j++){
            cout<<"  ";
        }
        j = 0;
        for (j=0;j<=i-1;j++){
            cout<<j<<" ";
        }
        // cout<<j;
        if (i==0){
            cout<<0;
        }
        else{
            cout<<j<<" ";
        }
        if (i!=0){
            j=i-1;
            for (j=i-1;j>0;j--){
                cout<<j<<" ";
            }
            cout<<j;
        }
        cout<<endl;
    }


}

int main() 
{

        solve();
    
    return 0;
}