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

ll get(ll t, ll q, ll w) {
    if(q>=t) return q;
    return ((t-q+w-1)/w)*w+q;
}

void solve(){
     ll i, j = 0, q = 0, m = 0, r = 0,  l=0, n, ans = 0, w=0,k=0,e=0,t;
    cin >> n >> t;
    ans=0;
    cin >> q >> w;
    for(i=1; i<n; i++) {
        cin >> m>>k;
        if(get(t,q,w)>get(t,m,k)) {
            ans=i;
            q=m;
            w=k;
        }
    }
    cout << ans+1;
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    // ll t; cin>>t; while(t--)
        solve();
    return 0;
}