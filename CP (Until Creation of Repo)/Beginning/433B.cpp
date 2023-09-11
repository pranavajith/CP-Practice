#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;
    ll a[n],b[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    copy(a,a+n,b);
    sort(b,b+n);
    ll m;
    cin>>m;
    // ll sol[m];
    for (int w=0;w<m;w++){
        ll q,l,r;
        cin>>q>>l>>r;
        ll sum1=0;
        if (q==1){
            for (int i=l-1;i<r;i++){
                sum1+=a[i];
            }
        }
        else{
            for (int i=l-1;i<r;i++){
                sum1+=b[i];
            }
        }
        cout<<sum1<<endl;
    }
    // for (auto d:sol){
    //     cout<<d<<endl;
    // }
}

int main() 
{
        solve();
    
    return 0;
}