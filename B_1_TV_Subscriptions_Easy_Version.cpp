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
    int n, k, d;
    cin >> n >> k >> d;
    vector<int> arr(n);
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int i = 0;
    while (i < d)
    {
        mp[arr[i]]++;
        i++;
    }
    int ans = mp.size();
 
    for (int i = d; i < n ; i++)
    {
        mp[arr[i - d]]--;
        if (mp[arr[i - d]] == 0)
            mp.erase(arr[i - d]);
        mp[arr[i]]++;
        ans = min(ans,(int) mp.size());
    }
    cout << ans << endl;
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