#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <algorithm>
#include <limits>
#include <iomanip>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

// void solve(){
//     ll n, ans = 0;
//     cin>>n;
//     for (int i=0;i<n;i++){
//         ll a;
//         cin>>a;
//         ans|=a;
//     }
//     cout<<ans<<"\n";
// }

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     // TxtIO;
//     ll t; cin>>t; while(t--)
//         solve();
//     return 0;
// }

void solve()
{
    ll n, ans(0);
    cin >> n;

    if (n < 3)
    {
        cout << 0 << endl;
        return;
    }

    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    for (ll i = 0; i < n - 2; i++)
    {
        for (ll j = i + 1; j < n - 1; j++)
        {
            for (ll k = j + 1; k < n; k++)
            {
                if ((1LL << arr[i]) + (1LL << arr[j]) > (1LL << arr[k]))
                {
                    ans++;
                }
            }
        }
    }

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    for (int it = 1; it <= t; it++)
    {
        solve();
    }
    return 0;
}