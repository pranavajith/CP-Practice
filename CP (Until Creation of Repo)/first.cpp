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

ll fact(ll n){
	if (n==0) return 1;
	return n*fact(n-1);
}

void solve(){
	// inputting a number
	long long n; 
	cin>>n;
	if (n<0) cout<<"Invalid\n";
	else cout<<fact(n)<<"\n";

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