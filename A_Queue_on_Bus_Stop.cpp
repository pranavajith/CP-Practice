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
    int ans = 0, n, m;
	cin >> n >> m;
	int remain = m;
	for(int i = 1; i <= n; i++)
	{
		int x;
		cin >> x;
		if(remain >= x)
		{
			remain -= x;
		}
		else
		{
			remain = m;
			remain -= x;
			ans ++;
		}
	}
	cout << ans+1 << endl;
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