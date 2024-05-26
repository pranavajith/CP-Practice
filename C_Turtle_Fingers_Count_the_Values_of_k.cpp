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
    ll a,b,l;
    cin>>a>>b>>l;
    if (b>a) swap(a,b);
    ll bigIncr = 1;
    set <ll> s;
    while (l % bigIncr == 0) {
        ll temp = l/bigIncr;
        ll a1 = 1;
        while (temp % a1 == 0){
            s.insert(temp/a1);
            a1 *= a;
        }
        bigIncr *= b;
    }
    cout<<s.size()<<"\n";
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