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


void solveTestCase()
{
    ll n, k;
    cin >> n >> k;
    ll h[n], a[n], l(n), m(0), ans(0);
    set<pair<ll, ll> > p;

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (ll i = 0; i < n; i++)
    {
        cin >> h[i];

        if (n == 1)
            p.insert(make_pair(0, 0));

        if (i > 0 && h[i - 1] % h[i] == 0)
        {
            l = min(l, i - 1);
            if (i == n - 1)
            {
                m = i;
                p.insert(make_pair(l, m));
            }
        }
        else if (i > 0 && h[i - 1] % h[i] != 0)
        {
            m = i - 1;
            p.insert(make_pair(l, m));
            l = i;

            if (i == n - 1)
            {
                m = i;
                p.insert(make_pair(m, m));
            }
        }
    }

    for (const auto &pair : p)
    {
        ll sum(0);
        vector<ll> sortedCopy(a + pair.first, a + pair.second);
        sort(sortedCopy.begin(), sortedCopy.end());
        for (ll i = 0; i < sortedCopy.size(); i++)
        {
            sum += sortedCopy[i];
            if (sum >= k)
                break;
            ans++;
        }
    }

    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solveTestCase();
    }
    return 0;
}