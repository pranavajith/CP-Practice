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
    ll n,k;
    cin>>n>>k;
    if (k==0){
        for (int i=0; i<n/2; i++){
            cout<<i<<" "<<n-i-1<<"\n";
        }
    }
    else if (k==n-1){
        if (n==4){
            cout<<-1<<"\n";
            return;
        }
        cout<<n-1<<" "<<n-2<<"\n";
        cout<<1<<" "<<n-3<<"\n";   
        cout<<0<<" "<<2<<"\n";
        for (int i=3;i<n/2; i++){
            cout<<i<<" "<<n-i-1<<"\n";
        }
    }
    else{
        // cout<<"start\n";
        cout<<0<<" "<<n-1-k<<"\n"<<k<<" "<<n-1<<"\n";
        for (int i=1; i<n/2; i++){
            if (i!=k && n-i-1 != k){
                cout<<i<<" "<<n-i-1<<"\n";
                // cout<<"yay!\n";
            }
            
        }
    }
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