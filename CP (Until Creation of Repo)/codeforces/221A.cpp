#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;
    if (n==1){
        cout<<1<<endl;
    }
    else{
        cout<<n<<" ";
        for (int i=1;i<n;i++){cout<<i<<" ";}
    }
    cout<<endl;
}

int main() 
{

        solve();
    
    return 0;
}