#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <algorithm>
#include <limits>
#include <iomanip>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);


void solve(){
    ll n,a,b;
    cin>>n>>a>>b;
    if (b==1){
        cout<<"Yes\n";
        return;
    }
    if (a==1){
        // cout<<n<<" "<<b<<"\n";
        if (((n-1) % b) == 0){
            cout<<"Yes\n";
            return;
        }
        else{
            cout<<"No\n";
            return;
        }
    }
    // if (b==0){
    //     ll a1 = 1;
    //     while (a1<=n)a1*=a;
    //     if (a1==n){
    //         cout<<"Yes\n";
    //         return;
    //     }
    //     else{
    //         cout<<"No\n";
    //         return;
    //     }
    // }
    ll a1 = 1;
    while (a1<=n){
        if (n%b == a1%b){
            cout<<"Yes\n";
            return;
        }
        a1*=a;
    }
    cout<<"No\n";
    return;
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    ll t; cin>>t; while(t--)
        solve();
    return 0;
}