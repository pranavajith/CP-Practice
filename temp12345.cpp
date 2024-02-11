#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <cmath>
#include <sstream>
#include <algorithm>
#include <map>
#include <numeric>
#include <limits>
using namespace std;
#define ll long long

int main()
{
    ll n, k;
    ll ans = numeric_limits<ll>::max();
    string s, as;
    cin >> n >> k;
    cin >> s;

    for (ll i = 0; i < 10; i++)
    {
        vector<pair<ll, ll> > mp(n);
        for (ll j = 0; j < n; j++)
        {
            mp[j].first = abs(i - (s[j] - '0'));
            mp[j].second = j;
        }

        sort(mp.begin(), mp.end());
        ll sum = accumulate(mp.begin(), mp.begin() + k, 0,
                            [](int accumulator, const pair<int, int> &p)
                            {
                                return accumulator + p.first;
                            });

        if (sum < ans)
        {
            for (ll j = k; j < n; j++)
            {
                if (mp[j].first == mp[k - 1].first)
                {
                    // cout << mp[k].second << " " << mp[k - 1].second << s[mp[k].second] - '0' << endl;
                    if ((s[mp[j].second] != s[mp[k - 1].second] && i - s[mp[k - 1].second] - '0' > i - s[mp[j].second] - '0') || (s[mp[j].second] == s[mp[k - 1].second] && i > s[mp[k - 1].second] - '0'))
                    {
                        swap(mp[j].second, mp[k - 1].second);
                        // cout << mp[k].second << " " << mp[k - 1].second << endl;
                    }
                }
            }

            as = s;
            ans = sum;
            for (ll j = 0; j < k; j++)
            {
                string k = to_string(i);
                as[mp[j].second] = k[0];
            }
        }

        /*else if (sum == ans)
        {
            string st = s;

            for (ll j = 0; j < k; j++)
            {
                string k = to_string(i);
                st[mp[j].second] = k[0];
            }

            if (st.compare(as) < 0)
                as = st;
        }*/
    }

    cout << ans << endl
         << as;

    return 0;
}