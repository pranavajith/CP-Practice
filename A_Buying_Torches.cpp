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
    ll x,y,k;
	cin>>x>>y>>k;
	ll p=(k*y)/(x-1);
	ll q=(k*y)%(x-1);
	if(q!=0) p++;
	ll rem=p*(x-1)-(k*y);
 
	ll o=0;
	if(rem<k){
		o=(k-1-rem)/(x-1);
		if((k-1-rem)%(x-1)!=0) o++;
	
	}
	
	p+=o;
	p+=k; 
	cout<<p<<endl;
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