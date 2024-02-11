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
    ll n, a, b, c;
    vector <ll> countc(3, 0);
    cin>>n;
    vector <ll> v(n), v1(n);
    for (int i=0; i<n; i++) cin>>v[i];
    for (int i=0; i<n; i++) cin>>v1[i];
    for (int i=0; i<n; i++) {
        a = v[i], b = v1[i], c = 0;
        // cout<<i<<": "; bool chec
        if (v[i] == 0 && v1[i] == 0) {
            countc[1]++, countc[2]++, countc[0]++; continue;
        }
        // if (v1[i] == 0) {
        //     cout<<"NO\n";
        //     return;
        // }
        while (true) {
            if (a==0) break;
            if (a==b) {
                // c = (c+2)%3;
                c+=2;
                break;
            }
            if (b==0){
                // c = (c+1)%3;
                c++;
                break;
            }
            if (b!=0) a %= (2*b);
            ll d = abs (a-b);
            a = b, b = d;
            // c = (c+1)%3;
            c++;
        }
        countc[c%3]++;
        // cout<<"\n";
    }
    // for (auto d:countc) cout<<d<<" "; cout<<"\n";
    if (countc[0] == n || countc[1] == n || countc[2] == n) cout<<"YES\n";
    else cout<<"NO\n";
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