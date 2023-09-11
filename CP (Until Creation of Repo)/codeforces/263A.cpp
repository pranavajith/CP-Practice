#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long

void solve(){
    int c=0;
    int r=0;
    for (int i=0;i<5;i++){
        for (int j=0;j<5;j++){
            int n;
            cin>>n;
            if (n==1){
                r=i+1; 
                c=j+1;
            }
        }
    }
    // cout<<r<<" "<<c<<endl;
    cout<<abs(r-3) + abs(c-3)<<endl;

}

int main() 
{
    // ll t;
    // cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}