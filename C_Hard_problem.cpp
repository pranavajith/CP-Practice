#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <algorithm>
#include <limits>
#include <iomanip>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n;
    cin>>n;
    vector <ll> v(n); 
    for (int i=0; i<n; i++)cin>>v[i];
    vector <string> words, revWords;
    for (int i=0; i<n; i++){
        // cin >> words[i], revWords[i] = words[i];reverse(revWords[i].begin(), revWords[i].end());
        string s;
        cin>>s;
        words.push_back(s);
        // cout<<s<<" ";
        reverse(s.begin(), s.end());
        // cout<<s<<"\n";
        revWords.push_back(s);
    }
    vector < vector <ll> > dp(n, vector <ll> (2, LLONG_MAX));
    dp[0][0] = 0;
    dp[0][1] = v[0];

    for (int i = 1; i < n; i++) {
		if (words[i - 1] <= words[i] && dp[i - 1][0] < LLONG_MAX)
			dp[i][0] = min(dp[i][0], dp[i - 1][0]);
		if (words[i - 1] <= revWords[i] && dp[i - 1][0] < LLONG_MAX)
			dp[i][1] = min(dp[i][1], dp[i - 1][0] + v[i]);
		if (revWords[i - 1] <= words[i] && dp[i - 1][1] < LLONG_MAX)
			dp[i][0] = min(dp[i][0], dp[i - 1][1]);
		if (revWords[i - 1] <= revWords[i] && dp[i - 1][1] < LLONG_MAX)
			dp[i][1] = min(dp[i][1], dp[i - 1][1] + v[i]);
	}

    // for (int i=1; i<n; i++){
    //     if (word[i-1] <= word[i]) dp[i-1][0] = min(dp[i][0], dp[i-1][0]);
    //     if (revword[i-1] <= word[i]) dp[i-1][0] = min(dp[i][0], dp[i-1][1]);
    //      if (word[i-1] <= revword[i]) dp[i-1][1] = min(dp[i][1], dp[i-1][0] + v[i]);
    //      if (revword[i-1] <= revword[i]) dp[i-1][1] = min(dp[i][1], dp[i-1][1] + v[i]);

    //     //  if (word[i-1] <= word[i] && dp[i-1][0]<LLONG_MAX) dp[i-1][0] = min(dp[i][0], dp[i-1][0]);
    //     //  if (revword[i-1] <= word[i] && dp[i-1][1]<LLONG_MAX) dp[i-1][0] = min(dp[i][0], dp[i-1][1]);
    //     //  if (word[i-1] <= revword[i] && dp[i-1][0]<LLONG_MAX) dp[i-1][1] = min(dp[i][1], dp[i-1][0] + v[i]);
    //     //  if (revword[i-1] <= revword[i] && dp[i-1][1]<LLONG_MAX) dp[i-1][1] = min(dp[i][1], dp[i-1][1] + v[i]);
    // }
    if (min(dp[n-1][0], dp[n-1][1]) == LLONG_MAX)cout<<-1<<"\n";
    else cout<<min(dp[n-1][0], dp[n-1][1])<<"\n";
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