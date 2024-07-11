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
    int n,d;
	cin>>n>>d;
	vector<int>arr(n);
	for(int i = 0;i<n;i++)cin>>arr[i];
	sort(arr.begin(),arr.end());
	reverse(arr.begin(),arr.end());
	int ans = 0;
	int rem = n;
	for(int i = 0;i<n;i++){
		int req = d/arr[i] + 1;
		if(req <= rem){
			ans++;
			rem = rem - req;
		}
	}
	cout<<ans<<endl;
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