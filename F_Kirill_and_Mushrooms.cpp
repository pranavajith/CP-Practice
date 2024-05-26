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
    vector <ll> v1(v.begin(), v.end());
    sort(v1.begin(), v1.end());
    vector <ll> check(n);
    for (int i=0; i<n; i++) {cin>>check[i]; check[i]--; }
    map <ll,ll> toBeRemoved, TillNow;
    ll ans = v1[n-1], cntAns = 1, r = n-2, l = 0, curCnt = 1;
    TillNow[v1[n-1]]++;
    for (int i=2; i<=n; i++){
        if (TillNow[v[check[l]]]) {
            TillNow[v[check[l]]]--;
            curCnt--;
        }
        else toBeRemoved[v[check[l]]]++;
        l++;
        while (r>=0 && curCnt < i) {
            if (toBeRemoved[v1[r]]) {
                toBeRemoved[v1[r]]--;
                
            }
            else {
                TillNow[v1[r]]++;
                curCnt++;
            }
            r--;
        }
        if (curCnt != i || r<-1) break;
        if (v1[r+1] * curCnt > ans) {
            ans = v1[r+1] * curCnt, cntAns = curCnt;
        }
    }
    cout<<ans<<" "<<cntAns<<"\n";
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