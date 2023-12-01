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
    double n, x, a; cin>>n>>x; double sum1 = 0, min1 = 0, max1 = 0;
    for (int i=0; i<n; i++) {
        cin>>a;
        sum1+=a;
        min1+=ceil(a/x);
    }
    ll a1 = ceil(sum1/x), a2 = min1;
    cout<<a1<<" "<<a2<<"\n";
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