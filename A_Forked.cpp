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
    ll a,b,kx, ky, qx, qy;
    cin>>a>>b>>kx>>ky>>qx>>qy;
    ll ans = 0;
    map <pair <ll,ll>, bool> king;
    king [make_pair(kx+a, ky+b)]=true;
    king [make_pair(kx-a, ky+b)]=true;
    king [make_pair(kx+a, ky-b)]=true;
    king [make_pair(kx-a, ky-b)]=true;
    king [make_pair(kx+b, ky+a)]=true;
    king [make_pair(kx-b, ky+a)]=true;
    king [make_pair(kx+b, ky-a)]=true;
    king [make_pair(kx-b, ky-a)]=true;
    if (king[make_pair(qx+a, qy+b)]) ans++;
    if (king[make_pair(qx-a, qy+b)]) ans++;
    if (king[make_pair(qx+a, qy-b)]) ans++;
    if (king[make_pair(qx-a, qy-b)]) ans++;
    if (king[make_pair(qx+b, qy+a)]) ans++;
    if (king[make_pair(qx-b, qy+a)]) ans++;
    if (king[make_pair(qx+b, qy-a)]) ans++;
    if (king[make_pair(qx-b, qy-a)]) ans++;
    if (a==b && (qx==kx || qy==ky))ans-=2;
    else if (a==b)ans--;
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