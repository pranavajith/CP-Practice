#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll m,k,a1,ak;
    cin>>m>>k>>a1>>ak;
    if (a1>=m || (ak*k>=m && m%ak==0)){
        cout<<0<<endl;
    }
    else{
        ll temp=0;
        if (a1==0 && ak==0){
            ll ak_new = (m)/k;
            ll a1_new = m - (ak_new*k);
            cout<<ak_new+a1_new<<endl;
            return;
        }
        // cout<<"hi"<<endl;
        else if (m==(k*ak + a1)){
            cout<<temp<<endl;
            return;
        }
        else if (m>(k*ak + a1)){
            // cout<<m-(k*ak + a1)<<endl;
            ll temp = m-k*ak;
            if (temp<0){
                if (m-(m/k)*ak-a1<=0){
                    cout<<0<<endl;
                    return;
                }
                else{
                    cout<<m-(m/k)*ak-a1<<endl;
                    return;
                }
            }
            ll ak_new = (temp-a1)/k;
            ll a1_new = temp-a1 - (ak_new*k);
            ll sol1 = ak_new+a1_new;
            // cout<<sol1<<endl;
            ll temp2=INT_MAX, i=1, count_big = 0;
            while (true){

                int lol = temp-(i*k)-a1;
                // cout<<lol<<endl;
                count_big++;
                if (lol<=0){
                    break;
                }
                ll temp3 = max(lol,0);
                temp2=min(temp2,temp3);
                i++;
            }
            if (temp2==INT_MAX)temp2=0;
            // cout<<count_big<<endl;
            cout<<min(sol1,temp2+count_big)<<endl;
            // temp = m-(k*ak);
            //  ll ak_new = (temp-a1)/k;
            // ll a1_new = temp-a1 - (ak_new*k);
            // ll sol1 = ak_new+a1_new;
            // if (a1>=(temp-(sol1-1)*k)){
            //     // cout<<"yay!";
            //     cout<<sol1-1<<endl;
            // }
            // else{
            // cout<<sol1<<endl;}
        }
        else if (a1>=m-(m/k)*ak){
            // cout<<"hi2"<<endl;
            cout<<0<<endl;
            return;
        }
        else{
            // cout<<"hi3"<<endl;
            cout<<m-(m/k)*ak - a1<<endl;
            return;
        }
       
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