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
    ll n, a, count1 = 0, prevsum = 0;
    cin>>n;
    // map <ll,ll> m;
    for (int i=0; i<n; i++){
        cin>>a;
        prevsum+=a;
        if (a==1)count1++;
    }
    if (n==1) cout<<"NO\n";
    else if (count1 + n > prevsum) cout<<"NO\n";
    else cout<<"YES\n";
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