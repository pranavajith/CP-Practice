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
    ll n,k;
    cin>>n>>k;
    vector <ll> v(n);
    map <ll,ll> m;
    bool check = false;
    for (int i=0; i<n; i++) {
        cin>>v[i];
        m[v[i]]++;
        if (m[v[i]] >= k) { 
            check = true;
        }
    }
    if (check) {
        cout<<0<<"\n";
        return;
    }
    ll ans = LLONG_MAX;
    sort(v.begin(), v.end());
    for (int i=0; i<n-1; i++) {
        ll temp = v[i], iter = 0;
        while (temp > 0) {
            ll counttemp = 1, ansfortemp = iter;
            for (int j=0; j<n; j++) {
                if (j==i)continue;
                ll temp2 = v[j], tempans = 0;
                while (temp2 > temp) {
                    temp2/=2;
                    tempans++;
                }
                if (temp2 == temp) {
                    ansfortemp+=tempans;
                    counttemp++;
                }
                if (counttemp == k){
                    ans = min(ans, ansfortemp);
                    break;
                }
            }
            // if (temp==0)break;
            temp/=2;
            iter++;
        }
    }
    if (ans == LLONG_MAX){
        ll temp = 0;
        for (int i=0; i<n; i++){
            while (v[i]) {
                v[i]/=2; temp++;
            }
        }
        cout<<temp<<"\n";
    }
    else cout<<ans<<"\n";
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