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

struct ReverseComparator {
    bool operator()(const int& lhs, const int& rhs) const {
        return lhs > rhs;  // Change to lhs < rhs for sorting in ascending order
    }
};

void solve(){
    ll n,m,a,b;
    cin>>n>>m;
    priority_queue<int, std::vector<int>, ReverseComparator> q1;
    for (int i=0; i<n; i++) {
        cin>>a;
        q1.push(a);
    }
    for (int i=0; i<m; i++) {
        cin>>a;
        // b = q1.top();
        q1.pop();
        q1.push(a);
    }
    ll ans = 0;
    while (q1.size()) {
        ans += q1.top(); q1.pop();
    }
    cout<<ans<<"\n";
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