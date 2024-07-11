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

ll gcd(ll a, ll b){
    if (b==0) return a;
    return gcd(b, a%b);
}

void solve(){
    ll n;
	cin >> n;
	
	ll a[n+17];
	
	for (ll i=1; i<=n; i++) {
		cin >> a[i];
	}
	
	sort(a + 1, a + n + 1);
	
	ll ok = 1;
	
	vector <ll> v;
	
	for (ll i=2; i<=n; i++) { 
		if (a[i] % a[1] != 0) {
			v.push_back(a[i]);
		}
	}
	
	ll gc = 0;
	
	for (auto c: v) {
		gc = gcd(gc, c);
	}
	
	cout << ((v.size() > 0 && gc == v[0]) || v.size() == 0 ? "Yes\n": "No\n");
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