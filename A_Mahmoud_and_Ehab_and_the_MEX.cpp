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
    ll n,x;		
	cin >> n >> x;
	
	bool f = 0;
	ll m = -1, ans = 0, cnt = 0;
	ll arr[n], freq[101+1];
	memset(freq, 0, sizeof(freq));
 
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
		freq[arr[i]] = 1;
	}
	for (int i = 0; i <= x; ++i)
	{
		if(freq[i]) {
			if(i == x){
				ans++;
			}
		}else {
			if(i != x){
				ans++;
			}
		}
	}
	cout << ans << "\n";
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