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
    for (int i=0; i<n; i++) cin>>v[i];
    sort(v.begin(), v.end());
    vector <ll> first2, last1;
    ll left = 0, right = n-1;
    first2.push_back(0); last1.push_back(0);
    for (int i=0; i<k; i++) {
        first2.push_back(v[left] + v[left+1]); left+=2;
        last1.push_back(v[right--]);
    }
    ll sumtot = accumulate(v.begin(), v.end(), 0LL);
    ll minsuch = LLONG_MAX;
    for (int i=1; i<=k; i++) {
        first2[i] += first2[i-1];
        last1[i] += last1[i-1];
    }
    for (int i=0; i<=k; i++) {
        minsuch = min(minsuch, first2[i] + last1[k-i]);
    }
    cout<<sumtot - minsuch<<"\n";
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