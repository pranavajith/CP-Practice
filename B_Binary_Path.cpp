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

// ll f(vector <string> &v, ll iter, ll n, string &ans, ll bottom){
//     if (iter == n-2){
//         if (bottom) {
//             return 1;
//         }
//         else {
//             if (v[0][n-1] == ans[n-1] && v[1][n-2] == ans[n-1]) return 2;
//             else if (v[0][n-1] == ans[n-1] || v[1][n-2] == ans[n-1]) return 1;
//             else return 0;
//         }
//     }
//     // if (ans[iter+1] == v[])
//     if (bottom) {
//         if ()
//     }
// }

void solve(){
    ll n;
    cin>>n;
    vector <string> v(2);
    for (int i=0; i<2; i++) cin>>v[i];
    // ll topIter = 0, bottomIter = 0; bool bottom = false, top = true;
    string ans;
    ans += v[0][0];
    ll iter = 0;
    bool check1 = true;
    while (iter < n-1){
        if (v[0][iter+1] == '0') ans += '0';
        else if (v[1][iter] == '0') {
            ans += v[1].substr(iter);
            check1 = false;
            break;
        }
        else ans += '1';
        iter++;
    }
    if (check1) ans += v[1][n-1];
    vector <bool> bottom(n, false);
    ll back = n;
    for (int i=n-1; i>=0; i--){
        if (ans[back] != v[1][i]) break;
        bottom[i] = true;
        back--;
    }
    // cout<<ans<<" : "; for (auto d:bottom) cout<<d<<" "; cout<<"\n"; 
    
    // ll cnt = f(v, 0, n, ans, 0);
    ll cnt = 0; iter = 0;
    // string temp;
    while (iter < n) {
        if (v[0][iter] != ans[iter]) break;
        if (v[1][iter] == ans[iter+1] && bottom[iter]){
            cnt++;
        }
        iter++;
    }
    cout<<ans<<"\n"<<cnt<<"\n";
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