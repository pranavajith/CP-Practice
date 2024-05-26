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
	int n;
	cin >> n;
	int sum, ma;
	sum = ma = 0;
	vector<int> a(n + 1);
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	sort(a.begin(), a.end());
		if(a[n] - a[n - 1] <= 1){
			cout << "YES\n";
		}
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