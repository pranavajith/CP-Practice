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
    ll n;
    cin>>n;
    bool topleft = false, topright = false, bottomleft = false, bottomright = false, top = false, bottom = false, left = false, right = false;
    for (int i=0; i<n; i++){
        ll x,y;
        cin>>x>>y;
        if (x>0) right = true;
        else if (x<0) left = true;
        if (y>0) top = true;
        else if (y<0) bottom = true;
        if (x>0 && y>0) topright = true;
        else if (x>0 && y<0) bottomright= true;
        else if (x<0 && y<0) bottomleft = true;
        else if (x<0 && y>0) topleft = true;
    }
    if ((topleft && bottomright) || (topright && bottomleft) || (bottom && top && left && right)) cout<<"NO\n";
    else cout<<"YES\n";
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