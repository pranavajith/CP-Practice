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

int calc(int a, int b, int c) {
	return abs(a - b) + abs(a - c) + abs(b - c);
}

void solve(){
    int q;
	cin >> q;
	for (int i = 0; i < q; ++i) {
		int a, b, c;
		cin >> a >> b >> c;
		int ans = calc(a, b, c);
		for (int da = -1; da <= 1; ++da) {
			for (int db = -1; db <= 1; ++db) {
				for (int dc = -1; dc <= 1; ++dc) {
					int na = a + da;
					int nb = b + db;
					int nc = c + dc;
					ans = min(ans, calc(na, nb, nc));
				}
			}
		}
		cout << ans << endl;
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