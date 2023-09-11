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
    ll n, sumalice = 0, sumbob = 0, cnt = 0;
    cin>>n;
    vector <ll> v(n);
    for (int i=0;i<n;i++)cin>>v[i];
    ll a = 0, b = n-1, prev = 0;
    for (int i=0;i<n;i++){
        cnt++;
        ll cur = 0;
        if (i==0){
            a++;
            sumalice+=v[0];
            prev = v[0];
        }
        else if (i%2==1){
            ll temp=0;
            while (temp<=prev){
                temp+=v[b];
                b--;
                if (b<a)break;
            }
            sumbob+=temp;
            prev = temp;
        }
        else {
            ll temp=0;
            while (temp<=prev){
                temp+=v[a];
                a++;
                if (b<a)break;
            }
            sumalice+=temp;
            prev = temp;
        }
        // cout<<cnt<<" a: "<<a<<" suma: "<<sumalice<<" b: "<<b<<" sumb: "<<sumbob<<"\n";
        if (a>b){
            break;
        }
    }
    cout<<cnt<<" "<<sumalice<<" "<<sumbob<<"\n";
}

int main() 
{
    // TxtIO;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}