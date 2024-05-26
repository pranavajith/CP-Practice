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
    int n = 0,a = 0,b1 = 0,b2 = 0,b3 = 0;
    cin>>n;
	for(int i=1;i<=n;i++) {
		cin>>a;
		if(a==1) b1++;
		else if(a==2) b2++;
		else b3++;
	}
	cout<<min(n-b1,min(n-b2,n-b3));
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