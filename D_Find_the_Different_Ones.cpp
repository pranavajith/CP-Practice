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
    // vector <ll> rightdif(n);
    ll m; cin>>m;
    if (count(v.begin(), v.end(), v[0]) == n) {
        while (m--) {
            ll a, b;
            cin>>a>>b;
            cout<<-1<<" "<<-1<<"\n";
        }
        return;
    }
    ll left = 0, right = 1;
    vector <ll> ans(n, -1);
    while (right < n) {
        while (right < n && v[right] == v[left]) right++;
        if (right == n) break;
        while (left < right) {
            ans[left++] = right;
        }
        right++;
    }
    // for (auto d:ans) cout<<d<<" ";
    while (m--) {
        ll a,b;
        cin>>a>>b;
        a--, b--;
        if (ans[a] == -1 || ans[a] > b) {
            cout<<-1<<" "<<-1<<"\n";
        }
        else cout<<a+1<<" "<<ans[a]+1<<"\n";
    }
    cout<<"\n";
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