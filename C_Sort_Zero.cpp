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
    map <int , int > zero;
		int n; cin >> n;
		vector <int> v(n + 1);
		v[0] = 0;
		for (int i = 1; i <= n; ++i) {
				cin >> v[i];
		}
		int ans = 0;
		set <int> s , del;
		for (int i = 1; i <= n; ++i){
				if(del.find(v[i]) != del.end()) v[i] = 0;
 
				if(v[i] < v[i - 1]){
						for(int j : s) del.insert(j);
						s.clear();
				}
				s.insert(v[i]);
		}
		del.erase(0);
		cout << del.size()<< '\n';
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