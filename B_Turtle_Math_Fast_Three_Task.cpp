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
    vector <ll> v(n);
    for (int i=0; i<n; i++) {
        cin>>v[i];
        v[i]%=3;
    }
    ll sum1 = accumulate(v.begin(), v.end(), 0LL);
    if (sum1 % 3 == 0) {
        cout<<0<<"\n";
        return;
    }
    ll cnt0 = count(v.begin(), v.end(), 0), cnt1 = count(v.begin(), v.end(), 1), cnt2 = count(v.begin(), v.end(), 2);
    if (cnt1 == 0 && cnt2 % 3 == 2) cout<<2<<"\n";
    else cout<<1<<"\n";
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