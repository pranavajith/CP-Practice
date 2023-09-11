#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
using namespace std;
#define ll long long

ll bin_to_dec(ll n){
    ll a=0;
    ll b=n;
    for (int i=0;i<log10(b-1)+1;i++){
        a+=pow(2,i)*(n%10);
        n/=10;
    }
    return a;
}

void solve(){
    string n;
    cin>>n;
    // ll sum = 0;
    // ll m_perm = 0;
    // for (int j=0;j<log10(n-1)+2;j++){
    //     ll m;
    //     if (j==0){
    //         m = n/10;
    //         // cout<<m<<endl;
    //     }
    //     else{
    //         ll ok = pow(10,j-1);
    //     m = (pow(10,j-1))*int((n/(pow(10,j))))+(n%ok);
    //     cout<<(pow(10,j-1))*int((n/(pow(10,j))))<<" "<<(n%ok)<<" "<<m<<" "<<bin_to_dec(m)<<endl;
    //     }
    //     if (sum<bin_to_dec(m)){
    //         m_perm = m;
    //         sum = bin_to_dec(m);
    //     }
    // }
    // cout<<m_perm<<endl;

    vector <int> v;
    for (int i=0;i<n.size();i++){
        // v.push_back()
        v.push_back((n[i]));
    }
    auto it = find(v.begin(),v.end(),'0');
    if (it!=v.end()){
        ll a = it-v.begin();
        cout<<n.substr(0,a)<<n.substr(a+1,n.size()+2-a)<<endl;
    }
    else{
        cout<<(n.substr(0,n.size()-1))<<endl;
    }
}


int main() 
{

        solve();
    
    return 0;
}