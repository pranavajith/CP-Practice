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

void solve(){
    ll n,m;
    cin>>n>>m;
    vector <ll> v(n);
    ll big = pow(2,n);
    for (int i=0; i<big; i++) cin>>v[i];
    ll dp[n+1][big];
    for (int i=0; i<=n; i++){
        if (i==0){
            for (int j=0; j<big; j++) dp[i][j] = v[j];
        }
        else {
            if (i%2){
                for (int j=0; j<big / pow(2,i); j++) {
                    dp[i][j] = (dp[i-1][2*j] | dp[i-1][2*j+1]);
                }
            }
            else{
                for (int j=0; j<big / pow(2,i); j++) {
                    dp[i][j] = (dp[i-1][2*j] ^ dp[i-1][2*j+1]);
                }
            }
        }
        cout<<"0 : ";for (int j=0; j<big; j++) cout<<dp[0][j]<<" ! "; cout<<"\n";
        cout<<"1 : ";for (int j=0; j<big; j++) cout<<dp[0][j]<<" ! "; cout<<"\n";
        cout<<"2 : ";for (int j=0; j<big; j++) cout<<dp[0][j]<<" ! "; cout<<"\n";
        cout<<"\n";
    } 
    // for (int i=0; i<=n; i++) {
    //     cout<<i<<" : ";
    //     for (int j=0; j<pow(2,n); j++) cout<<dp[i][j]<<" ";
    //     cout<<"\n";
    // }
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