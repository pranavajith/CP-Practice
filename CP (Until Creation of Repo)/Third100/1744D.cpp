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

ll divisor2(ll a){
    ll sol=0;
    while(true){
        if (a%2!=0)break;
        sol++;
        a/=2;
    }
    return sol;
}

void solve(){
    ll n, sum1=0;
    cin>>n;
    // cout<<divisor2(24);
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        sum1+=divisor2(a);
    }
    // cout<<sum1<<"sum1 \n";
    // ll l=0, r=1e9;
    // ll a = 1;
    // while (a*2 <= n)a*=2;
    // // a/=2;
    // // cout<<a<<"\n";
    // ll w = divisor2(a);
    // ll wsum = w*(w+1)/2;
    // if (wsum+sum1 >= n){

    // }
    vector <ll> d;
    for (int i=1;i<=n;i++){
        // cout<<i<<" :i ";
        ll temp=0, x=i;
        while (x%2==0){
            x/=2;
            temp++;
        }
        
            d.push_back(temp);
            // cout<<temp<<" temp!\n";
            // temp=0;
            // break;
        
    }
    // for (auto a1:d)cout<<a1<<" ";
    // cout<<"end\n";
        sort(d.begin(),d.end());
        reverse(d.begin(),d.end());
        // for (auto a1:d)cout<<a1<<" ";
        // cout<<"\n sum1: "<<sum1<<"\n";
        if (sum1>=n)cout<<0<<"\n";
        else{
            bool flag = false;
            ll count1=0;
            for (int i=0;i<d.size();i++){
                // cout<<"lol ";
                if (sum1+d[i]>=n){
                    // cout<<"lol1 ";
                        count1++;
                    flag = true;
                    break;
                }
                else{
                    // cout<<"lol2 ";
                    sum1+=d[i];
                    count1++;
                }
            }
            if (flag)cout<<count1<<"\n";
            else cout<<-1<<"\n";
        }
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