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
    ll n,t,k,a;
    cin>>n>>t>>k;
    ll l = 0, r = n-1;
    while (l<r) {
        ll mid = (l+r)/2;
        cout<<"? "<<l+1<<" "<<mid+1<<"\n"; cout.flush();
        cin>>a;
        if ((mid-l+1) - a >= k) {
            r = mid;
        }
        else {
            k -= (mid-l+1) - a;
            l = mid+1;
        }
        // cout<<k<<"\n";
    }
    cout<<"! "<<l+1<<"\n";
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