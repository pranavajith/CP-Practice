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
    ll n,m, x1,y1,x2,y2;
    cin>>n>>m>>x1>>y1>>x2>>y2;
    if (((x1 == 1 || x1 == n) && (y1==1 || y1==m)) || ((x2==1 || x2==n) && (y2==1 || y2==m))) cout<<2<<"\n";
    else if (((x1 == 1 || x1 == n) || (y1==1 || y1==m)) || ((x2==1 || x2==n) || (y2==1 || y2==m))) cout<<3<<"\n";
    else cout<<4<<"\n";
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