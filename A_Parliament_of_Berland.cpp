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
    ll n,a,b, alt = 0;
    cin>>n>>a>>b;
    if (n>a*b)cout<<-1<<"\n";
    else{
        vector < vector <ll> > v(a, vector <ll> (b,0));
        ll iter = 1;
        for (int c = 0; c<a; c++){
            if (c%2){
                for (int r=b-1; r>=0; r--){
                    v[c][r] = iter++;
                    if (iter==n+1)break;
                }
            }
            else{
                for (int r=0; r<b; r++){
                    v[c][r] = iter++;
                    if (iter==n+1)break;
                }
            }
            if (iter==n+1)break;
        }
        for (auto d:v){
            for (auto d1 : d) cout<<d1<<" "; cout<<"\n";
        }
        // if (b%2){
        // for (int i=1; i<=a*b; i++){
        //     if ((i-1)%b==0)cout<<"\n";
        //     if (i<=n)cout<<i<<" ";
        //     else cout<<0<<" ";
        // }
        // }
        // else{
        //     for (int i=0; i<a*b; i++){
        //         if (i==0){
        //             cout<<0<<" ";
        //             continue;
        //         }
        //     if ((i)%b==0)cout<<"\n";
        //     if (i<=n)cout<<i<<" ";
        //     else cout<<0<<" ";
        // }
        // }
    }
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