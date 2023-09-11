#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long

int almost_lucky(ll n, int k){
    if (n%k==0){
        // cout<<endl<<endl<<k<<" 1"<<endl;
        return 1;
    }
    if (k>=n){
        // cout<<endl<<endl<<k<<" 0"<<endl;
        return 0;
    }
    return almost_lucky(n, k*10 + 4) | almost_lucky(n, k*10 + 7);  
}


void solve(){

    ll n;
    cin>>n;
    // vector <ll> v;
    // v.push_back(4);
    // int c=0;
    // int l = floor(log10(n)+1);
    // for (int i=0;i<=l/2;i++){
    //      v.insert(v.begin(),4);
    //      int num = vec_to_int(v);
    //     if (n%num==0){
    //         c+=1;
    //         break;
    //     }
    //     v.insert()
        
    // }
    int a = 0;
    int b = 0;
    a = almost_lucky(n, 4);
    // cout<<"end of a"<<endl;
    b = almost_lucky(n, 7);

    if (a | b){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    // cout<<a<<" "<<b<<endl;
}

int main() 
{

        solve();
    
    return 0;
}