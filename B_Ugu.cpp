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
    ll n;
    cin>>n;
	string s;
	cin>>s; 
	int idx=0;
	while(idx+1<n&&s[idx]<=s[idx+1]) idx++; 
	if(idx==n-1){
		cout<<"0\n";return;
	}
	int cnt=0;
	for(int i=idx+1;i<s.size();i++){
		int j=i+1;
		while(j<s.size()&&s[j]==s[j-1]) j++;
		j--;
		cnt++;
		i=j;
	}
	cout<<cnt<<"\n";
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