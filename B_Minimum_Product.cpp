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
    ll a,b,x,y,n;
    cin>>a>>b>>x>>y>>n;
    // ll min1, max1, minwala1, maxwala1;
    // if (a<b) {
    //     min1 = a; minwala1 = x; max1 = b; maxwala1 = y;
    // }
    // else  {
    //     min1 = b; minwala1 = y; max1 = a; maxwala1 = x;
    // }
    // if (min1 - minwala1 > n){
    //     cout<<(min1-n)*max1<<"\n";
    // }
    // else{
    //     cout<<minwala1 * max(maxwala1, max1 - (n - (min1 - minwala1)))<<"\n";
    // }
    ll firstans, secondans;
    ll a1 = a, b1 = b, x1 = x, y1 = y, n1 = n;
    if (n1 <= a1-x1) {
        firstans = a1 - n1;
        n1 = 0;
        // cout<<firstans<<" ";
    }
    else {
        firstans = x1;
        n1 -= (a1-x1);
        // cout<<firstans<<" ";
    }
    firstans *= (max(y1, b-n1));
    // cout<<(max(y1, b-n1))<<"\n";

    ll a2 = a, b2 = b, x2 = x, y2 = y, n2 = n;
    if (n2 <= b2-y2) {
        secondans = b2 - n2;
        n2 = 0;
        // cout<<secondans<<" ";
    }
    else {
        secondans = y2;
        n2 -= (b2-y2);
        // cout<<secondans<<" ";
    }
    secondans *= (max(x2, a-n2));
    // cout<<(max(x1, a-n2))<<"\n";

    cout<<min(firstans, secondans)<<"\n";
    // cout<<min((max(x, a - n) * max(y, b - (n - min( 0LL , a - x )))) , ())
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