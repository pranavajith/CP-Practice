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
    // vector <ll> isAlive(n, 1);
    // ll aliveCount = n;
    vector <ll> v(n);
    for (int i=0; i<m; i++){
        ll a,b;
        cin>>a>>b;
        a--, b--;
        if (a>b){
            // aliveCount--;
            v[b]++;
        }
        else {
            // aliveCount--;
            v[a]++;
        }
    }
    ll aliveCount = 0;
    for (int i=0; i<n; i++){
        if (v[i]==0) aliveCount++;
    }
    ll q;
    cin>>q;
    while (q--){
        ll a;
        cin>>a;
        if (a==3) cout<<aliveCount<<"\n";
        else if (a==1){
            ll b,c; cin>>b>>c; b--, c--;
            if (b>c){
                if (v[c] == 0) aliveCount--;
                v[c]++;
            }
            else {
                if (v[b] == 0) aliveCount--;
                v[b]++;
            }
        }
        else {
            ll b,c; cin>>b>>c; b--, c--;
            if (b>c){
                v[c]--;
                if (v[c] == 0) {
                    aliveCount++;
                }
            }
            else {
                v[b]--;
                if (v[b] == 0){
                    aliveCount++;
                }
            }
        }
    }
    // while (q--){
    //     ll a; cin>>a;
    //     if (a==3) cout<<aliveCount<<"\n";
    //     else if (a==1){
    //         ll b,c;
    //         cin>>b>>c;
    //         b--, c--;
    //         if (b>c) {
    //             if (!isAlive[b]) aliveCount++;
    //             isAlive[b] = 1;
    //             v[b].insert(c);
    //         }
    //         else {
    //             if (!isAlive[c]) aliveCount++;
    //             isAlive[c] = 1;
    //             v[c].insert(b);
    //         }
    //     }
    //     else {
    //         ll b,c;
    //         cin>>b>>c;
    //         b--, c--;
    //         if (b>c){
    //             v[b].erase(v[b].find(c));
    //             if (v[b].size()==0) {
    //                 aliveCount--; isAlive[b] = 0;
    //             }
    //         }
    //         else {
    //             v[c].erase(v[c].find(b));
    //             if (v[c].size()==0) {
    //                 aliveCount--; isAlive[c] = 0;
    //             }
    //         }
    //     }
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