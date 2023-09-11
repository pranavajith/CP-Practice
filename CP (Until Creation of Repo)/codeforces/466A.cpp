#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long

void solve(){
    ll m,a;
    float n, b;
    cin>>n>>m>>a>>b;
    if (a<b/m){
        cout<<ceil(n*a)<<endl;
    }
    else{
        ll sol;
        int w = int(n)/m;
        // cout<<w<<endl;
        sol=w*b + (n-w*m)*a;
        int lol = min(w*b + (n-w*m)*a,(floor((n/m)+1)*b));
        // cout<<w*b + (n-w*m)*a<<endl<<floor(((n/m))*b)<<endl;
        cout<<lol<<endl;
        // cout<<n/m;
        // cout<<b*w<<endl;
        // cout<<w*b + (n-w*m)*a<<endl;
    }
}

int main() 
{

        solve();
    
    return 0;
}