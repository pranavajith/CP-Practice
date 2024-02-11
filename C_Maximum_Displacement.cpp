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
    string s; cin>>s;
    ll countR = count(s.begin(), s.end(), 'R');
    ll countS = s.size() - countR, n = s.size();
    ll ans1, ans2;
    ll k; cin>>k;
    ll countR2 = countR, countS2 = countS, k2 = k;
    // R -> S, then rem S -> R

    if (countR >= k){
        countR -= k;
        countS += k;
        ans1 = abs(countS - countR);
    }
    else {
        k-=countR;
        countS+=countR - k;
        // countR = 0;
        ans1 = countS;
    }
    if (countS >= k){
        countS -= k;
        countR += k;
        ans2 = abs(countS - countR);
    }
    else {
        k-=countS;
        countR+=countS - k;
        // countR = 0;
        ans2 = countR;
    }
    cout<<max(ans1, ans2);
    
    
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