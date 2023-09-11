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
        cout<<2<<endl<<1<<" "<<2<<endl;
    }
    else if (n==4){
        cout<<2<<endl;
        ll count1=0;
    while (n!=2){
        if (count1==0){
            cout<<n<<" "<<n-2<<endl;
        }
        else{
            cout<<n<<" "<<n<<endl;
            cout<<n<<" "<<n-2<<endl;
        }
        n--;
        count1++;
    }
    // cout<<1<<" "<<3<<endl;
    }
    else{
        cout<<2<<endl;
        cout<<n<<" "<<n-1<<endl;
        while(n!=2){
            cout<<n<<" "<<n-2<<endl;
            n--;
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