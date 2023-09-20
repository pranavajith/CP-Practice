#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <algorithm>
#include <limits>
#include <iomanip>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);
int p[100005];
// typedef long long ll;
void solve()
{
    int n,a,b;scanf("%d%d%d",&n,&a,&b);
    set<int> st;
    ll sol = 0 , ans = 2e18;
    for(int i = 1;i <= n;i++) {
        int x;scanf("%d",&x);
        if(st.find(x) == st.end()) st.insert(x);
        else sol += a;
    }
    int c = 0;
    for(auto x : st) p[++c] = x;
    for(int i = 1;i <= c;i++) {
        ans = min(ans , 1LL*(p[i] - i)*b + 1LL*(c-i)*a);
    }
    ans = min(ans , 1LL*c*a + b) ;
    printf("%lld\n",ans+sol);
}
int main()
{
    int t;scanf("%d",&t);
    while(t--) solve();
}