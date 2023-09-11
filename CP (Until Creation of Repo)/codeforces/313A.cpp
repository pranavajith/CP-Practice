#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;
    if (n>=0){
        cout<<n<<endl;
    }
    else{
        ll a = (n/100)*10+(n%10);
        ll b = (n/10);
        // cout<<a<<endl<<b<<endl;
        if (a>b){
            cout<<a<<endl;
        }
        else{
            cout<<b<<endl;
        }
    }
}

int main() 
{

        solve();
    
    return 0;
}