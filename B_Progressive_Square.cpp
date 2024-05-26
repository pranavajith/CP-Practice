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
    int n, c, d; cin >> n >> c >> d;
		vector<int> b(n*n);
		for (int &i : b) cin >> i;
 
		vector<vector<int> > v(n, vector<int>(n));
 
 
		sort(b.begin(), b.end());
 
 
		v[0][0] = b[0];
 
		for (int i = 1; i < n; ++i) v[0][i] = v[0][i - 1] + d;
 
		for (int i = 1; i < n; ++i)
			for (int j = 0; j < n; ++j)
				v[i][j] = v[i - 1][j] + c;
 
		vector<int> el;
 
		for (auto i : v) for (int j : i) el.push_back(j);
 
		sort(el.begin(), el.end());
		bool lol = true;
		for (int i = 0; i < n*n && lol; ++i) {
			lol = el[i] == b[i];
		}
 
		if (lol) cout << "YES\n";
		else cout << "NO\n";
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