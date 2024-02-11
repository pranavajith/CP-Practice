#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <cmath>
#include <sstream>
#include <algorithm>
#include <map>
using namespace std;
#define ll long long

int solve(int n)
{

    ll st = 0;
    if (n % 2 != 0)
    {
        n++;
        st++;
    }

    ll pw = 0;

    for (ll i = pow(2, 15); i > 0; i /= 2)
    {
        if (n % i == 0)
        {
            pw = log2(i);
            break;
        }
    }

    ll ans = 15 - pw + st;

    for (ll i = 0; i < ans; i++)
    {
        if ((n + i) % 32768 == 0)
        {
            ans = min(ans, i + st);
        }
    }

    return ans;
}

int main()
{
    ll n;
    cin >> n;

    vector<ll> vc(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> vc[i];
    }

    for (ll i = 0; i < n; i++)
    {
        cout << solve(vc[i]) << " ";
    }
    return 0;
}