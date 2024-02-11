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
    ll n,x;
    cin>>n;
    ll prefsum = 0, max1 = 0, del = 0, ans = 0;
    for (int i=0; i<n; i++) {
        cin>>x;
        prefsum += x;
        max1 = max(max1, prefsum);
        if (prefsum - max1 < del) {
            del = prefsum - max1;
            ans = max1;
        }
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