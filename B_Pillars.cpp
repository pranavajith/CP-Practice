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
    int n;  cin>>n;
		int a[n+5];
		int mx=-1,idx=-1;
		a[0]=0;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			if(a[i]>mx) mx=a[i],idx=i;
		}
		bool f=1;
		for(int i=1;i<idx;i++){
			if(a[i]<a[i-1]){
				f=0;
				break;
			}
		}
		for(int i=idx+1;i<=n;i++){
			if(a[i]>a[i-1]){
				f=0;
				break;
			}
		}
		if(f) cout<<"YES";
		else cout<<"NO";
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