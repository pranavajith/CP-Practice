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

ll gcd(ll a, ll b){
    if (b==0) return a;
    return gcd(b, a%b);
}

void solve(){
    int n;
    cin >> n;
    vector <int> v(n+1);
    for(int i=1; i<=n; i++) cin >> v[i];
    
    int gd = v[1];
    for(int i=2; i<=n; i++)
        gd = gcd(gd, v[i]);
    // debug(gd);
    int ans = -1;
    if(gd == 1)
        ans = 0;
    else{
        gd = gcd(v[n], n);
        for(int i=1; i<n; i++)
            gd = gcd(v[i], gd);
        if(gd == 1) ans = 1;
        else{
            gd = gcd(v[n-1], n-1);
            for(int i=1; i<=n; i++){
                if(i != n-1) gd = gcd(v[i], gd);
            }
            if(gd == 1) ans = 2;
        }
    }
    
    cout << (ans == -1 ? 3 : ans) << endl;
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