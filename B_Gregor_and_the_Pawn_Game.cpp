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
    ll n; cin>>n;
    string a,b;
    cin>>a>>b;
    ll ans = 0;
    vector <ll> v(n, 0);
    for (int i=0; i<n; i++){
        if (b[i] == '1'){
            if (i!=0 && a[i-1] == '1' && v[i-1] == 0) ans++;
            else if (a[i] == '0') ans++;
            else if (i!=n-1 && a[i+1] == '1') {
                v[i+1] = 1; ans++;
            }
        }
    }
    cout<<ans<<"\n";
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