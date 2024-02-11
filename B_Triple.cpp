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
// #define ll long long
// ll mod = 1e9 + 7;
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);



#define ll long long


bool check(vector<int> &arr, int k, int n, double mid) {
	double currentpos = arr[0];
	// int iter = 0;
	for (int i=1; i<n; i++) {
		int d = (arr[i] - arr[i-1]) / mid;
		if (mid * d == (arr[i] - arr[i-1])) d--;
		k-= d;
		if (k<0) return false;
	}
	return true;
}

double minimiseMaxDistance(vector<int> &arr, int k){
	// Write your code here.
	int n = arr.size();
	double l = 0, r = 0, ans;
	for (int i=1; i<n; i++) r = max(r, (double)arr[i]-arr[i-1]);
	while (l<=r) {
		double mid = l + (r-l)/2;
        cout<<mid<<" !!\n";
		if (check(arr, k, n, mid)){
			ans = mid; r = mid-1;
		}
		else l = mid+1;
 	}	
	 return ans;
}


void solve(){
    ll n,c;
    cin>>n>>c;
    vector <int> v(n);
    for (int i=0; i<n; i++) cin>>v[i];
    // if (check(v, 1, 10, 0.5)) cout<<"ok\n";
    cout<<minimiseMaxDistance(v, 1)<<" : final\n";
    // cout<<check(v, 3);
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