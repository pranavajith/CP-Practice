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
    ll n; cin>>n;
    string s; cin>>s;
    ll ans = 0, numSatis = count(s.begin(), s.end(), '1');
    bool check = true;
    if (numSatis >= ((n+1)/2)) check = false;

    vector <ll> leftCheck(n, 0), rightCheck(n, 0);
    if (n - numSatis >= ((n+1)/2)) rightCheck[n-1] = 1;
    ll cnt = 0;
    for (int i=0; i<n; i++){
        if (s[i] == '0') cnt++;
        if (cnt >= (i+2)/2) leftCheck[i] = 1;
    }
    cnt = 0; ll cntTillNow = 0;
    for (int i=n-1; i>0; i--){
        cntTillNow++;
        if (s[i] == '1') cnt++;
        if (cnt >= (cntTillNow+1)/2) rightCheck[i-1] = 1;
    }

    // for (auto d:leftCheck) cout<<d<<" "; cout<<"\n";
    // for (auto d:rightCheck) cout<<d<<" "; cout<<"\n";

    for (int i=0; i<n; i++){
        if (leftCheck[i] && rightCheck[i]) {
            if (check) {
                check = false;
                ans = i+1;
            }
            else if (abs(((1.0*n)/2) - (i+1)) < abs(((1.0*n)/2) - ans)) ans = i+1;
        }
        // cout<<i<<" "<<numSatis<<" "<<ans<<"\n";
    }
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