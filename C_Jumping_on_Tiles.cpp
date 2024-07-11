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
    int n,m;
    string s;
    cin >> s;
    n = s.size();
 
    vector<vector<int> > p(26);
    for(int i = 1; i + 1 < n; i++)
        p[s[i] - 'a'].push_back(i + 1);
 
    int a = s[0] - 'a', b = s[n - 1] - 'a';
    int cnt = 2;
    if(a <= b)
    {
        for(int i = a; i <= b; i++)
            cnt += p[i].size();
        cout << b - a << ' ' << cnt << endl;
        cout << 1 << ' ';
        for(int i = a; i <= b; i++)
            for(auto j: p[i])
                cout << j << ' ';
        cout << n << endl;
    }
    else
    {
        for(int i = a; i >= b; i--)
            cnt += p[i].size();
        cout << a - b << ' ' << cnt << endl;
        cout << 1 << ' ';
        for(int i = a; i >= b; i--)
            for(auto j: p[i])
                cout << j << ' ';
        cout << n << endl;
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