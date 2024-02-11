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
    vector <ll> v(n);
    for (int i=0; i<n; i++) cin>>v[i];
    vector <ll> fwdcost(n, 0), backcost(n, 0);
    fwdcost[0] = 0, backcost[n-1] = 0;
    fwdcost[1] = 1, backcost[n-2] = 1;
    for (int i=2; i<n; i++) {
        if (v[i]-v[i-1] < v[i-1]-v[i-2]) fwdcost[i] = fwdcost[i-1]+1;
        else fwdcost[i] = fwdcost[i-1] + v[i] - v[i-1];
    }
    // if (v[n-1] - v[n-2] < v[n-2] - v[n-3]) fwdcost[n-1] = fwdcost[n-2] + 1;
    // else fwdcost[n-1] = fwdcost[n-2] + v[n-1] - v[n-2];
    for (int i=n-3; i>=0; i--) {
        if (v[i+1] - v[i] < v[i+2] - v[i+1]) backcost[i] = backcost[i+1] + 1;
        else backcost[i] = backcost[i+1] + v[i+1] - v[i]; 
    }
    // if (v[1] - v[0] < v[2] - v[1]) backcost[0] = backcost[1] + 1;
    // else backcost[0] = backcost[1] + v[1] - v[0];
    // for (auto d:fwdcost) cout<<d<<" "; cout<<"\n"; 
    // for (auto d:backcost) cout<<d<<" "; cout<<"\n"; 
    ll m,a,b; cin>>m;
    while (m--) {
        cin>>a>>b;
        a--, b--;
        if (b>a){
            // if (a==0) cout<<fwdcost[b]<<"\n";
            // else cout<<fwdcost[b]-fwdcost[a]<<"\n"; 
            cout<<fwdcost[b]-fwdcost[a]<<"\n"; 
        }
        else {
            // if (a==n-1) cout<<backcost[b]<<"\n";
            // else cout<<backcost[b]-backcost[a+1]<<"\n";
            cout<<backcost[b]-backcost[a]<<"\n";
        }
    }
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