#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <algorithm>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

bool isprime(ll n){
    for (int i=2;i<=n/2;i++){
        if (n%i==0)return false;
    }
    return true;
}

void solve(){
    ll n;
    cin>>n;
    if (n>=3)cout<<2<<"\n";
    else cout<<1<<"\n";
    // ll a = n+1;
    vector <ll> v;
    // cout<<v.size()<<" ";
    for (int i=2;i<=n+1;i++){
        if (i==2){
            cout<<1<<" ";
            v.push_back(2);
        }
        else{
            bool flag = true;
            // cout<<i<<"! ";
            for (auto d:v){
                if (i%d==0){
                    
                    flag = false;
                    break;
                }
            }
            if (flag){
                cout<<1<<" ";
                v.push_back(i);
            }
            else cout<<2<<" ";
        }
    }
    cout<<"\n";
}

int main() 
{
    // TxtIO;
    // ll t;
    // cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}