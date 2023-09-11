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

void solve(){
    ll n;
    cin>>n;
    vector <ll> d;
    bool flag = true;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        if (i==0){
            d.push_back(a);
        }
        else{
            if (a>=d[i-1] || a==0){
                d.push_back(abs(d[i-1]+a));
            }
            else{
                flag = false;
                break;
            }
        }
    }
    if (flag){
        for (int i=0;i<n;i++){
            cout<<d[i]<<" ";
        }
        cout<<"\n";
    }
    else{
        cout<<-1<<"\n";
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