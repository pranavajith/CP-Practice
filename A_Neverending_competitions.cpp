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

int main() 
{
   int n;cin>>n;
	string s1;cin>>s1;
	vector<string>v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	int cnt=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<v[i].size();j++)
		{
			if(v[i].substr(j,3)==s1)cnt++;
		}
	}
	if(cnt%2==0)cout<<"home"<<endl;
	else cout<<"contest"<<endl;
	return 0;
}