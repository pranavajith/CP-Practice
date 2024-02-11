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
    vector <pair <ll,ll> > v(n);
    for (int i=0; i<n; i++) {
        cin>>v[i].first;
        v[i].second = i;
    }
    sort(v.begin(), v.end());
    vector <ll> ans(n);
    ll l = 0, r = n-1, s = n;
    while (l<=r) {
        if ((v[r].first == n-l) ^ (v[l].first == n-r-1)) {
            if (v[r].first == n-l){
                ans[v[r--].second] = s--;
            }
            else ans[v[l++].second] = -(s--);
        }
        else {
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
    for (auto d:ans) cout<<d<<" "; cout<<"\n";
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