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
    vector <ll> v(2*n);
    // ll cursum = 0;
    ll odd = 0;
    for (int i=0; i < 2*n; i++) {
        cin>>v[i];
        odd += v[i]%2;
    }
    // ll cursum = accumulate(v.begin(), v.end(), 0LL);
    // if (cursum % 2) {
    //     cout<<"No\n";
    //     return;
    // }
    // if (odd > 0 && odd%2 == 0) cout<<"Yes\n";
    // else cout<<"No\n";
    if (odd == n)  cout<<"Yes\n";
    else cout<<"No\n";
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