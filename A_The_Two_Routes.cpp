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
    ll n,m,a,b;
    cin>>n>>m;
    // vector <pair <ll,ll> > v;
    pair <ll,ll> p;
    map < pair <ll,ll> , bool > ma;
    for (int i=0; i<n; i++){
        cin>>a>>b;
        p.first = a;
        p.second = b;
        // v.push_back(p);
        ma[p] = true;
    }
    if (m==0){
        cout<<-1<<"\n";
        return;
    }
    for (int i=1; i<n; i++) {
        if (ma[make_pair(i,n)] && ma[make_pair(i,i+1)]) {
            cout<<-1<<"\n";
            return;
        }
        else if (!ma[make_pair(i,n)]) break;
    }
    
    if (!ma[make_pair(1,n)]){
        ll ans = LLONG_MAX;
        for (int i=1; i<=n; i++) {
            // ll temp = i;
            for (int j=n; j>=i+1; j--) {
                if (ma[make_pair(i,j)]){
                    ans = min(ans, i + n - j);
                    break;
                }
            }
        }
        cout<<ans<<"\n";
    }
    else {
        ll ans = LLONG_MAX;
        for (int i=1; i<=n; i++){
            for (int j=n; j>=i+1; j--) {
                if (!ma[make_pair(i,j)]) {
                    ans = min(ans, i+n-j);
                    break;
                }
            }
        }
        cout<<ans<<"\n";
    }
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