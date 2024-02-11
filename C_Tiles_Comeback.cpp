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
    vector <ll> v(n);
    for (int i=0; i<n; i++ ) cin>>v[i];
    ll leftiter = 0, rightiter = n-1, firstcol = v[0], secondcol = v[n-1], countfirst = 0, countlast = 0;
    while (leftiter < n && countfirst < k) {
        if (v[leftiter] == firstcol) countfirst++;
        if (countfirst == k) break;
        leftiter++;
    }
    while (rightiter >=0 && countlast < k) {
        if (v[rightiter] == secondcol) countlast++;
        if (countlast == k) break;
        rightiter--;
    }
    // cout<<leftiter<<" "<<rightiter<<"\n";
    if (leftiter == n || rightiter < 0 || (firstcol != secondcol && leftiter > rightiter)) cout<<"NO\n";
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