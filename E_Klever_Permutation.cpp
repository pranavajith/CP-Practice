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
    ll n, k;
    cin>>n>>k;
    ll low = 1, high = n;
    vector <ll> ans(n, 0);
    for (int i=0; i<k; i++) {
        if (i%2==0) {
            ll iter = i;
            while (iter < n){
                ans[iter] = low++;
                iter += k;
            }
        }
        else {
            ll iter = i;
            while (iter < n) {
                ans[iter] = high--;
                iter += k;
            }
        }
    }
    for (auto d:ans) cout<<d<<" "; cout<<"\n";
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