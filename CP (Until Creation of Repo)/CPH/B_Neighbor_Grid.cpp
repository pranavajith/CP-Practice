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
    ll n,m;
    cin>>n>>m;
    // cout<<"hello! ";
    bool flag = true;
    for (int i=0;i<n;i++){
        // cout<<"hello!2 ";
        for (int j=0;j<m;j++){
            // cout<<"hello!3 ";
            ll a;
            cin>>a;
            if ((a>2 && ((i==0 && j==0) || (i==0 && j==m-1) || (i==n-1 && j==0) || (i==n-1 && j==m-1)))){
                flag = false;
            }
            else if ((a>3 && (i==0 || i==n-1 || j==0 || j==m-1))){
                flag = false;
            }
            else if (a>4)flag = false;
        }
    }
    // cout<<"hello!4 ";
    if (flag){
        cout<<"YES\n";
        // cout<<"hello!5 ";
        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                if ((i==0 && j==0) || (i==0 && j==m-1) || (i==n-1 && j==0) || (i==n-1 && j==m-1))cout<<2<<" ";
                else if (i==0 || i==n-1 || j==0 || j==m-1)cout<<3<<" ";
                else cout<<4<<" ";
            }
            cout<<"\n";
        }
    }
    else{
        // cout<<"hello!6 ";
        cout<<"NO"<<"\n";
    }
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