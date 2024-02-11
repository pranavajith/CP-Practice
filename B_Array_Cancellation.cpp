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
    ll pos = 0;
    for (int i=0; i<n; i++) if (v[i]>0) pos += v[i];
    if (pos == 0) {
        cout<<0<<'\n';
        return;
    }
    ll left = 0, right = n-1, cnt = 0;
    while (left <= right) {
        while (left <= right && v[left] <= 0) left++;
        while (left <= right && v[right] >= 0) right--;
        if (left >= right) break;
        ll temp = min(abs(v[left]), abs(v[right]));
        cnt += temp;
        v[left] -= temp; v[right] += temp;
    }
    cout<<pos - cnt<<"\n";
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