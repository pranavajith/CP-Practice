#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long

void solve(){
    ll n,m;
    cin>>n>>m;
    if (n%2==0){
    ll c = 0;
    for (int i=0;i<n+1;i++){
        
        if ((((n+i)/2) % m) == 0){
            cout<<((n+i)/2)<<endl;
            c++;
            break;
        }
    }
    if (c==0){
        cout<<-1<<endl;
    }
}
else{
    ll c = 0;
    for (int i=0;i<n+1;i++){
        
        if ((((n+i+1)/2) % m) == 0){
            cout<<((n+i+1)/2)<<endl;
            c++;
            break;
        }
    }
    if (c==0){
        cout<<-1<<endl;
    }
    }
}


int main() 
{

        solve();
    
    return 0;
}