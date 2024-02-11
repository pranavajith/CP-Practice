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
    ll n,a;
    cin>>n;
    ll prev = 0, cnt = 0;
    bool check = true;
    for (int i=0; i<n; i++) {
        cin>>a;
        cnt += max(0LL, (a-prev)/120);
        prev = a;
    }
    cnt += max(0LL, (1440-prev)/120);
    if (cnt >= 2) {
            cout<<"YES\n";
            return;
        }
    cout<<"NO\n";
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