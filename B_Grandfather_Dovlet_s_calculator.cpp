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
     map<char, int>mp;
    mp.insert({ '0',6 });
    mp.insert({ '1',2 });
    mp.insert({ '2',5 });
    mp.insert({ '3',5 });
    mp.insert({ '4',4 });
    mp.insert({ '5',5 });
    mp.insert({ '6',6 });
    mp.insert({ '7',3 });
    mp.insert({ '8',7 });
    mp.insert({ '9',6 });
    long long sum = 0, x, y;
    string s;
    cin >> x>>y;
    for (int i = x; i <=y; i++) {
        s = to_string(i);
        for(int j=0;j<s.size();j++)
        sum += mp[s[j]];
    }
    cout << sum << endl;
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