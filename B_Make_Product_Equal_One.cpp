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
    ll n; cin>>n;
    ll a, ans = 0, countmin = 0, countzero = 0;
    for (int i=0; i<n; i++){
        cin>>a;
        if (a==0) {
            ans++;
            countzero++;
        }
        else if (a>0)ans+=a-1;
        else {
            countmin++;
            ans+=abs(a)-1;
        }
    }
    // cout<<ans<<"\n";
    if (countmin % 2 && countzero == 0) cout<<ans+2<<"\n";
    else cout<<ans<<"\n";
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // // TxtIO;
    // ll t; cin>>t; while(t--)
        solve();
    return 0;
}