#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

// bool check_cube(int a,int b, int )

void solve(){
    ll n;
    cin>>n;
    // if (n==1)cout<<"NO\n";
    // else if (n==2)cout<<"YES\n";
    // else{
    // ll a=1, b=n;
    // while (a<=b){
    //     if (n==pow(a,3)+pow(b,3) || n==pow(a+1,3)+pow(b,3) || n==pow(a,3)+pow(b+1,3) || n==pow(a-1,3)+pow(b,3) || n==pow(a,3)+pow(b-1,3)){
    //         cout<<"YES\n";
    //         return;
    //     }
    //     else if (((a==b-1) || (b==a-1)) && n!=pow(a,3)+pow(b,3)){
    //         cout<<"NO\n";
    //         return;
    //     }
    //     // cout<<a<<" "<<b<<"\n";
    //     ll mid = a+(b-a)/2;
    //     if (pow(a,3) + pow(b,3) == n){
    //         cout<<"YES\n";
    //         return;
    //     }
    //     else if (pow(a,3) + pow(b,3) > n){
    //         b=mid;
    //     }
    //     else if ((pow(a,3) + pow(b,3) < n)){
    //         a=mid;
    //     }
    //     // cout<<a<<" "<<b<<"\n";
    // }
    // cout<<"NO\n";
    // }
    if (n==1)cout<<"NO\n";
    else{
    for (ll i=1;i*i*i<=n;i++){
        ll cb = n-i*i*i;
        ll cb_rt = cbrt(cb);
        if (cb_rt * cb_rt * cb_rt == cb && cb_rt>0){
            cout<<"YES\n";
            // cout<<i<<" "<<cb_rt;
            return;
        }
    }
    cout<<"NO\n";
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