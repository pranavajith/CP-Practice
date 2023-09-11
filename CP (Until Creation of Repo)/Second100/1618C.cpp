#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <algorithm>
#include <numeric>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

ll gcd(ll a, ll b){
    if (b==0)return a;
    return gcd(b, a%b);
}

void solve(){
    {
		int n; cin >> n;
		vector<ll> v1, v2;
		for (size_t i = 0; i < n; i++)
		{
			ll x; cin >> x;
			if (i % 2 == 0)
				v1.push_back(x);
			else
				v2.push_back(x);
		}
		ll mn1 = v1[0], mn2 = v2[0];
		for (size_t i = 0; i < v1.size(); i++)
		{
			mn1 = gcd(mn1, v1[i]);
		}
		for (size_t i = 0; i < v2.size(); i++)
		{
			mn2 = gcd(mn2, v2[i]);
		}
		bool f1 = 1, f2 = 1;
		for (size_t i = 0; i < v1.size(); i++)
		{
			if (v1[i] % mn2 == 0)
			{
				f2 = 0;
				break;
			}
		}
		for (size_t i = 0; i < v2.size(); i++)
		{
			if (v2[i] % mn1 == 0)
			{
				f1 = 0;
				break;
			}
		}
		if (f1)
			cout << mn1;
		else if (f2)
			cout << mn2;
		else
			cout << 0;
		cout << "\n";
	}
}

int main() 
{
    // lTxtIO;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}


