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
    ll n,k;
    cin>>n>>k;
    if (2*n==k){
        cout<<n<<endl;
    }
    else if (k>=(3*n)){
        cout<<0<<endl;
    }
    else{
        cout<<n-(k-2*n)<<endl;
    }
}

int main() 
{
    // lTxtIO;

        solve();
    
    return 0;
}