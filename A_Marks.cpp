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
    vector <ll> max1(m, 0);
    vector <string> v;
    for (int i=0; i<n; i++){
        string a; cin>>a;
        for (int j=0; j<m; j++){
            max1[j] = max((ll)max1[j], (ll)(a[j]-'0'));
        }
        v.push_back(a);
    }
    ll ans = 0;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if (v[i][j] - '0' == max1[j]) {
                ans++; break;
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
    // ll t; cin>>t; while(t--)
        solve();
    return 0;
}