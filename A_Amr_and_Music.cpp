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
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    vector<pair<int, int> > vp(n);
 
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        vp[i] = make_pair(v[i], i); // store value and its original index
    }
 
    // Sort the vector of pairs based on the values
    sort(vp.begin(), vp.end());
 
    int sum = 0, ans = 0;
    vector<int> ansv;
 
    for (int i = 0; i < n; i++) {
        if (vp[i].first + sum <= k) {
            sum += vp[i].first;
            ansv.push_back(vp[i].second); // store the original index
            ans++;
        } else {
            break;
        }
    }
 
    cout << ans << endl;
    
    for (auto index : ansv) {
        cout << index + 1 << " ";
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