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
    ll n,x,a,maxa = -1;
    cin>>n>>x;
    bool checkx = false;
    for (int i=0; i<n; i++) {
        cin>>a;
        if (a==x) checkx = true;
        maxa = max(a, maxa);
    }
    if (checkx) cout<<1<<"\n";
    else {
        cout<<max (2LL, (x - 1) / maxa + 1)<<"\n";

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