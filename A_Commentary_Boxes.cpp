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
     ll n,m,a,b;
    cin>>n>>m>>a>>b;
    
    if(n%m == 0) {
      cout<<"0"<<endl;
      return;
    }
 
    ll tmp1 = n/m;
    ll tmp2 = tmp1 + 1;
 
    tmp1 = tmp1 * m;
    tmp2 = tmp2 * m;
 
    ll cost1 = (n - tmp1)*b;
    ll cost2 =  (tmp2 - n)*a;
 
    ll ans = min(cost1,cost2);
 
    cout<<ans<<endl;
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