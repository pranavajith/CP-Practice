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
    ll n, x;
    cin >> n >> x;
    ll arr[n];
    queue<pair<ll, ll> > q;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        q.push({arr[i], 1});
    }
    ll sum = 0;
    while (!q.empty())
    {
        ll val = q.front().first;
        ll cnt = q.front().second;
        q.pop();
        sum += val * cnt;
        if (val % x == 0)
        {
            q.push({val / x, cnt * x});
        }
        else
        {
            break;
        }
    }
    while (!q.empty())
    {
        ll val = q.front().first;
        ll cnt = q.front().second;
        q.pop();
        sum += val * cnt;
    }
    cout << sum << endl;
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