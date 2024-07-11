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
    int n; cin >> n;
	
	vector <int> v(n);
	for (int i = 0; i < n; i++) cin >> v[i];
	sort(v.begin(), v.end(), greater<int>());
	double redArea = 0;
	
	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			redArea += acos(-1) * pow(v[i], 2);
		}
		else {
			redArea -= acos(-1) * pow(v[i], 2);
		}
	}
	
	cout << fixed;
	cout << setprecision(10);
	cout << redArea << endl;
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