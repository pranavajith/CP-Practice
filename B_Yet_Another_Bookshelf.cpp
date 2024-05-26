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
		vector<int> a(n);
		for (auto &it : a) cin >> it;
		while (a.back() == 0) a.pop_back();
		reverse(a.begin(), a.end());
		while (a.back() == 0) a.pop_back();
		cout << count(a.begin(), a.end(), 0) << endl;
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