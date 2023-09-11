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
    bool check=false;
    for (int i=1;pow(i,2)*2<=pow(10,9);i++){
        if (pow(i,2)*2==n || pow(i,2)*4==n){
            cout<<"YES"<<endl;
            check=true;
            break;
        }
    }
    if (!check){
        cout<<"NO"<<endl;
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