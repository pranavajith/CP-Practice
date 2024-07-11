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
    ll n;
		cin >> n;
		vector <int> rij;
		ll nu;
		for (ll x = 0; x < n; x++) {
			cin >> nu;
			rij.push_back(nu);
		}
		ll antw = 0;
		sort(rij.begin(), rij.end());
		ll nodig = 1;
		for (ll x = 0; x < n; x++) {
			if (rij[x] < nodig) {
				continue;
			}
			antw += (rij[x] - nodig);
			nodig++;
		}
		cout << antw << endl;
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