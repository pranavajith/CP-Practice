#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <queue>
#include <stack>
#include <algorithm>
#include <limits>
#include <iomanip>
using namespace std;
#define ll long long
ll mod = 1e9 + 7;
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

// bool isPrime(ll n){
//     // map <ll,ll> m;
//     ll count1 = 0;
//     for (int i=2; i*i<=n; i++){
//         if (n%i==0){
//             if (count1 > 2) return false;
//             count1++;
//             while (n%i==0) n/=i;
//         }
//     }
//     if (count1==2)return true;
//     else return false;
// }

void solve(){
    ll n; cin>>n;
    // vector <ll> v;
    ll ans = 0;
    // for (int i=2; i<=n; i++){
    //     if (isPrime(i)){
    //         v.push_back(i);
    //     }
    // }
    // ll ans = 0;
    // for (auto d:v)cout<<d<<" "; cout<<"\n";
    // for (int i=0; i<v.size()-1; i++){
    //     for (int j=i+1; j<v.size(); j++){
    //         if (v[i] * v[j] > n) break;
    //         cout<<v[i]<<" "<<v[j]<<"\n";
    //         ans++;
    //     }
    // }
    for (int i=2; i<=n; i++){
        ll count1 = 0;
        ll w = i;
        // cout<<i<<" : ";
        for (int j=2; j*j <= w; j++){
            if (w%j==0){
                // cout<<j<<" ";
                count1++;
                if (count1>2)break;
                // count1++;
                while (w%j==0)w/=j;
            }
        }
        if (w!=1)count1++;
        if (count1 == 2) {
            ans++;
            // cout<<i<<" ";
            // cout<<" yay! ";
        }
        // cout<<"\n";
    }
    cout<<ans<<"\n";
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    // ll t; cin>>t; while(t--)
        solve();
    return 0;
}