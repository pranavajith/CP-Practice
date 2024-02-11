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
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    // double a1 = double(a)/b, c1 = double(c)/d, b1 = double(b)/a, d1 = double(d)/c;
    // if (a1==c1) cout<<0<<"\n";
    if (a*d == b*c) cout<<0<<"\n";
    // else if (int(a1/c1) == a1/c1 || int(c1/a1) == c1/a1 || int(b1/d1) == b1/d1 || int(d1/b1) == d1/b1) cout<<1<<"\n"; 
    else if (a==0 || b==0 || c==0 || d==0 || (a*d) % (b*c) == 0 || (b*c) % (a*d) == 0) cout<<1<<"\n";
    else cout<<2<<"\n";
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