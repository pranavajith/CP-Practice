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

int gcd(int x,int y)
{
	if (!y)return x;
	return gcd(y, x % y);
}

void solve(){
    int x; cin >> x;
	int ans = 0;
	int y = 0;
	for (int i = 1; i < x; i++)
	{
		int t = gcd(x, i) + i;
		if (t > ans) { ans = t; y = i; }
	}
	cout << y << "\n";
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