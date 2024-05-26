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
    ll n,m,k;
    cin>>n>>m>>k;
    if ((n-1)*(n)/2 < m || m < n-1) cout<<"NO\n";
    else if (n==1){
        if (k>1) cout<<"YES\n";
        else cout<<"NO\n";
    }
    else if (m == n*(n-1)/2){
        if (k>2) cout<<"YES\n";
        else cout<<"NO\n";
    }
    else {
        if (k>3) cout<<"YES\n";
        else cout<<"NO\n";
    }
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