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
     string s; cin >> s;
    int count = 1;
    bool b = true;
    for(int x = 1; x < s.length(); x++)
    {
        if(s[x] != s[x - 1])
        {
            if(s[x - 1] == '1') count++;
            if(s[x - 1] == '0')
            {
                if(b) b = false;
                else count++;
            }
        }
    }
    cout << count << "\n";
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