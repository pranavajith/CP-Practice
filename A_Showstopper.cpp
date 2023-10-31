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
    vector <ll> a(n), b(n);
    for (int i=0; i<n; i++) cin>>a[i]; for (int i=0; i<n; i++) cin>>b[i]; 
    for (int i=0; i<n-1; i++){
        if ((a[n-1]>=a[i] && b[n-1] >= b[i]) || (a[n-1]>=b[i] && b[n-1]>=a[i])){
            continue;
        }
        cout<<"No\n";
        return;
    }
    cout<<"Yes\n";
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