#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <algorithm>
#include <limits>
#include <iomanip>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

int main() {
	int test_cases;
	cin >> test_cases;
	for (int test_case = 0; test_case < test_cases; test_case++) {
		vector<string> v(3);
		for (int i = 0; i < 3; i++)
			cin >> v[i];
		string ans = "DRAW";
		for(int i = 0; i < 3; i++) {
			if (v[i][0] == v[i][1] && v[i][1] == v[i][2] && v[i][0] != '.')
				ans=v[i][0];
		}
		for (int i = 0; i < 3; i++) {
			if (v[0][i] == v[1][i] && v[1][i] == v[2][i] && v[0][i] != '.')
				ans=v[0][i];
		}
		if (v[0][0] == v[1][1] && v[1][1] == v[2][2] && v[0][0] != '.')
			ans=v[0][0];
		if (v[0][2] == v[1][1] && v[1][1] == v[2][0] && v[0][2] != '.')
			ans=v[0][2];
		cout << ans << endl;
	}
	return 0;
}