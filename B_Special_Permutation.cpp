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
    ll n,a,b;
    cin>>n>>a>>b;
    vector <ll> ans(n);
    ans[0] = a;
    ll cnt = n;
    for (int i=1; i<n/2; i++){
        // if (a == b) a++;
        if (cnt == b) cnt--;
        ans[i] = cnt--;
    }
    if (cnt < a) {
        cout<<-1<<"\n";
        return;
    }
    ans[n/2] = b;
    // ll cnt = 1;
    cnt = 1;
    for (int i=n/2+1; i<n; i++){
        // if (cnt == )
        // if (b==a) b--;
        if (cnt == a) cnt++;
        ans[i] = cnt++;
    }
        if (cnt > b) {
        cout<<-1<<"\n";
        return;
    }
    // cout<<ans.size()<<"\n";
    // for (auto d:ans) cout<<d<<" "; cout<<" !!\n";
    set <ll> s(ans.begin(), ans.end());
    if (s.size() == n && *max_element(ans.begin(), ans.end()) == n) {
        for (auto d:ans) cout<<d<<" "; cout<<"\n";
    }
    else cout<<"-1\n";
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