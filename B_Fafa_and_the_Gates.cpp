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
    ll ans = 0, x = 0, y = 0, n; cin>>n;
    char c; cin>>c;
    if (c == 'U') y++;
    else x++;
    bool xGreater; if (x>y) xGreater = true;
    else xGreater = false;
    for (int i=0; i<n-1; i++){
        cin>>c;
        if (c=='U') y++;
        else x++;
        if (xGreater && x < y) {
            xGreater = false; ans++;
        }
        else if (!xGreater && x > y) {
            xGreater = true; ans++;
        }
    }
    cout<<ans<<"\n";
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