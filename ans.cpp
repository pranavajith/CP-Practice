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

// ll cnt[27];
int main()
{
    ll cnt[27] = {0};
    // for (int i=0; i<27; i++) cnt[i] = 0;
    for (int i=0; i<27; i++) cout<<cnt[i]<<" "; cout<<"\n";
	ll counter;
	string s;
	cin >> s;
	ll n = s.length();
	if (n < 26)
	{
		cout << -1;
		return 0;
	}
	counter = 0;
	for (int i = 0; i < 26; i++)
	{
		if (s[i] == '?')
		{
			counter++;
			continue;
		}
		cnt[s[i] - 'A']++;
		if (cnt[s[i] - 'A'] == 1)
			counter++;
	}
	if (counter == 26)
	{
		int cur = 0;
		while (cnt[cur] > 0)
			cur++;
		for (int i = 0; i < 26; i++)
		{
			if (s[i] == '?')
			{
				s[i] = cur + 'A';
				cur++;
				while (cnt[cur] > 0)
					cur++;
			}
		}
		for (int i = 0; i < n; i++)
		{
			if (s[i] == '?')
				s[i] = 'A';
		}
		cout << s;
		return 0;
	}
	for (int i = 26; i < n; i++)
	{
		if (s[i] != '?')
		{
			cnt[s[i] - 'A']++;
			if (cnt[s[i] - 'A'] == 1)
				counter++;
		}
		if (s[i - 26] != '?')
		{
			cnt[s[i - 26] - 'A']--;
			if (cnt[s[i - 26] - 'A'] == 0)
				counter--;
		}
		if (s[i - 26] == '?')
			counter--;
		if (s[i] == '?')
			counter++;
		if (counter == 26)
		{
			int cur = 0;
			while (cnt[cur] > 0)
				cur++;
			for (int j = i - 25; j <= i; j++)
			{
				if (s[j] == '?')
				{
					s[j] = cur + 'A';
					cur++;
					while (cnt[cur] > 0)
						cur++;
				}
			}
			for (int i = 0; i < n; i++)
			{
				if (s[i] == '?')
					s[i] = 'A';
			}
			cout << s;
			return 0;
		}
	}
	cout << -1;
	return 0;
}
