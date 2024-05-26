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
    string s;
	cin>>s;
	int n=s.length();
	if(s[0]=='a' && s[1]=='b'){
		cout<<'a'<<" ";
		for(int i=1;i<n-1;i++){
			cout<<s[i];
		}
		cout<<" "<<s[n-1]<<endl;
	}
	else{
		cout<<s[0]<<" "<<s[1]<<" ";
		for(int i=2;i<n;i++){
			cout<<s[i];
		}
		cout<<endl;
	}
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