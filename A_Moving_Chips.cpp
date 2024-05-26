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
    for (int i=0; i<n; i++) cin>>v[i];
    // ll left = 0; while (v[])
    if (count(v.begin(), v.end(), 1) == 0) cout<<0<<"\n";
    else {
        ll left = 0, right = n-1;
        while (v[left] != 1) left++;
        while (v[right] != 1) right--;
        ll cnt = 0;
        for (int i = left+1; i<right; i++) cnt += (v[i] == 0);
        cout<<cnt<<"\n";
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