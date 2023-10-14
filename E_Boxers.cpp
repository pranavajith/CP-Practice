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
    ll n, ans = 0, maxv = INT_MIN;
    cin>>n;
    vector <ll> v(n), check(150001, 0);
    map <ll,ll> m;
     for (int i=0; i<n; i++){
        cin>>v[i];
        m[v[i]]++;
        maxv = max(maxv, v[i]);
    //     ll a;
    //     cin>>a;
    //     if (a==1){
    //         if (!check[1]){
    //             check[1]=1;
    //             ans++;
    //         }
    //         else if (!check[2]){
    //             check[2]=1;
    //             ans++;
    //         }
    //     }
    //     else{
    //         if (!check[a]){
    //             check[a]++;
    //             ans++;
    //         }
    //         else if (!check[a-1]){
    //             check[a-1]++;
    //             ans++;
    //         }
    //         else if (!check[a+1]){
    //             check[a+1]++;
    //             ans++;
    //         }
    //     }
     }
    //  cout<<ans<<"\n";
    for (int i=1; i<=maxv+1; i++){
        if (i==1){
            if (m[1]){
                m[1]--;
                ans++;
            }
            else if (m[2]){
                m[2]--;
                ans++;
            }
        }
        else if (i==maxv+1){
            if (m[maxv]){
                ans++;
            }
        }
        else{
            if (m[i-1]){
                m[i-1]--;
                ans++;
            }
            else if (m[i]){
                m[i]--;
                ans++;
            }
            else if (m[i+1]){
                m[i+1]--;
                ans++;
            }
        }
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