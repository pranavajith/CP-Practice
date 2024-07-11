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
    int t,ans=114514,ns;
    string str,targ="ACTG";
     cin>>t>>str;
    for(int i = 0; i <= t-4; i++)
    {
    	ns=0;
    	for(int j = 0; j <= 3; j++)
    	{
    		ns+=min(abs(((str[i+j]+26)-targ[j])%26),abs(((targ[j]+26)-(str[i+j]))%26));
    	}
    	//cout<<ns<<endl;
    	ans=min(ns,ans);
    }
    cout<<ans;
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