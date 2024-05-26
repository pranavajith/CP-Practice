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
    ll n,k;
    cin>>n>>k;
    vector <ll> v1(n), v2(n);
    for (int i=0; i<n; i++) cin>>v1[i];
    for (int i=0; i<n; i++) cin>>v2[i];
    if (v1[0] == 0 || (v1[k-1] == 0 && v2[k-1] == 0)){
        cout<<"NO\n";
        return;
    }
    if (v1[k-1] == 1){
        cout<<"YES\n"; return;
    }
    ll last = n-1;
    while (last >= 0 && !(v1[last] == 1 && v2[last] == 1)) last--;
    if (last < k-1) {
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";

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