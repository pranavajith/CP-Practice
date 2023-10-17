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

ll nb, ns, nc, cb, cs, cc, p, pb, ps, pc;

ll sol(ll m){
    return max(0LL, cb*m-nb)*pb + max(0LL, cs*m-ns)*ps + max(0LL, cc*m-nc)*pc <= p;
}

void solve(){
    string s;
    cin>>s;
    cin>>nb>>ns>>nc>>pb>>ps>>pc>>p;
    cb = count(s.begin(), s.end(), 'B');
    cs = count(s.begin(), s.end(), 'S');
    cc = count(s.begin(), s.end(), 'C');
    ll l = 0, r = 1e13;
    while (l<=r){
        // cout<<l<<" ";
        ll mid = (l+r)/2;
        if(sol(mid))l = mid+1;
        else r = mid-1;
    }
    cout<<r<<"\n";
    
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