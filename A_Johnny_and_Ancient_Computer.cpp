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

ll f(ll n) {
    while (n%2==0)n/=2;
    return n;
}

void solve(){
    ll a,b;
    cin>>a>>b;
    if (a==b) {
        cout<<0<<"\n";
        return;
    }
    if (a>b) swap(a,b);
    // b is always > a
    if (f(a) != f(b)){
        cout<<-1<<"\n";
        return;
    }
    int cnt = 0;
    while (a < b){
        cnt++; a*=2;
    }
    // if (cnt%3)
    int ans = cnt/3;
    cnt %= 3;
    if (cnt) ans++;
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