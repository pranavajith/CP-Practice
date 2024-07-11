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
    
		int dp[200009][2], n,a[200009];
        cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		int maxd=-0x3f3f3f3f;
		for(int i=1;i<=n;i++)
		{
			if(abs(a[i-1])%2+abs(a[i])%2==1||i==1)
			{
				dp[i][1]=max(dp[i-1][0]+a[i],dp[i-1][1]+a[i]);
				dp[i][0]=a[i];
			}
			else
			{
				dp[i][1]=a[i];
				dp[i][0]=a[i];
			}
			maxd=max(maxd,max(dp[i][1],dp[i][0]));
		}
		cout<<maxd<<endl;
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