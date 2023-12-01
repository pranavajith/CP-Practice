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
    ll n;
    cin>>n;
    vector <ll> boys(n);
    for (int i=0; i<n; i++) cin>>boys[i];
    ll m;
    cin>>m;
    vector <ll> girls(m);
    for (int i=0; i<m; i++) cin>>girls[i];
    sort(boys.begin(), boys.end());
    sort(girls.begin(), girls.end());
    ll a = 0, b = 0, ans = 0;
    while (a<n && b<m){
        if (abs(boys[a]-girls[b]) <= 1){
            ans++;
            a++;
            b++;
        }
        else if (boys[a] > girls[b]) b++;
        else a++;
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