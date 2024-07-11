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
    int n;
        cin >> n;
        vector<string> v(n);
 
        for(auto& s:v)  cin >> s;
 
        for(int i = 0; i < n; ++i) {
            int cnt = 0;
            for(int j = 0; j < n; ++j) {
                if((j-1 >= 0 && v[i][j-1] == 'o'))   cnt++;
                if((j+1 < n && v[i][j+1] == 'o'))   cnt++;
                if((i-1 >= 0 && v[i-1][j] == 'o'))   cnt++;
                if((i+1 < n && v[i+1][j] == 'o'))   cnt++;
 
                if(cnt & 1) {
                    cout << "NO\n";
                    return;
                }
            }
        }
 
        cout << "YES\n";
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