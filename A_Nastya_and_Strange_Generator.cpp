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
    ll n;
    cin>>n;
    vector <ll> v(n);
    for (int i=0; i<n; i++)cin>>v[i];
    // bool check = false;
    // for (int i=1; i<n; i++){
    //     if (v[i]==1)continue;
    //     if (v[i]!=v[i-1]+1){
    //         cout<<"No\n";
    //         return;
    //     }
    // }

    // ll a = 1, i = n-1, newa = a; bool check = false;
    // while (i>=0){
    //     while (i>=0 && v[i]!=a){
    //         // if (!check){
    //         //     check = true;
    //         //     newa = v[i];
    //         //     cout<<newa<<" !\n";
    //         // }
    //         if (i==0){
    //             // cout<<"Ok! "<<i<<" "<<a<<"\n";
    //             if (v[i]==a+1)cout<<"Yes\n";
    //             else cout<<"No\n";
    //             return;
    //         }
    //         if (v[i]!=v[i-1]+1){
    //             cout<<"No\n";
    //             return;
    //         }
    //         i--;
    //     }
    //     if (i==0)break;
    //     a++; i--;
    //     a=newa+1;
    //     check = false;
    // }
    // cout<<"Yes\n";

    ll a = 1, i = n-1, newa = a; bool check = false;
    while (i>0){
        // cout<<a<<"\n";
        newa = v[i];
        // cout<<v[i]<<" "<<a<<"\n";
        while (i>0 && v[i]!=a){
            if (v[i]!=v[i-1]+1){
                cout<<"No\n";
                return;
            }
            i--;
        }
        a = newa+1;
        // cout<<"newa "<<a<<"\n";
        if (i==0){
            break;
        }
        i--;
    }
    cout<<"Yes\n";



    // ll a = 1;
    // while (v.size()>=0){
    //     if (v.back() != a)break;
    //     v.pop_back();
    //     a++;
    // }
    // // cout<<a<<"\n";
    // if (v.size()==0){
    //     cout<<"Yes\n";
    //     return;
    // }
    // for (int i=1; i<v.size(); i++){
    //     if (v[i]==a)continue;
    //     if (v[i]!=v[i-1]+1){
    //         cout<<"No\n";
    //         return;
    //     }
    // }
    // cout<<"Yes\n";
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