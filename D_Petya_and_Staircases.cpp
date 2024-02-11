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
    ll a;
    map <ll,ll> m1;
    vector <ll> v(m);
    for (int i=0; i<m; i++) {
        cin>>a;
        m1[a]++;
        v[i] = a;
    }
    // if (m1[1] || m1[n]) cout<<"NO\n";
    if (count(v.begin(), v.end(), 1) || count(v.begin(), v.end(), n)) cout<<"NO\n";
    else {
        sort(v.begin(), v.end());
        for (int i=0; i<m-2; i++){
            if (v[i+1]==v[i]+1 && v[i+2]==v[i+1]+1){
                cout<<"NO\n";
                return;
            }
        }
        cout<<"YES\n";
    }
    // else{
    //     for (int i=1; i<=n-2; i++){
    //         if (m1[i] && m1[i+1] && m1[i+2]){
    //             cout<<"NO\n";
    //             return;
    //         }
    //     }
    //     cout<<"YES\n";
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