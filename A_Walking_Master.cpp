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

void solve(){
    ll x1, y1, x2, y2;
    cin>>x1>>y1>>x2>>y2;
    if ((y2 < y1) || (y2-y1 < x2 - x1)){
        cout<<-1<<"\n";
        return;
    }
    ll ans = y2-y1;
    x1 += ans;
    ans+= abs(x2 - x1);
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