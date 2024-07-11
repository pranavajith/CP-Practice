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
     string s;
        cin >> s;
        string s1 = "", s2 = "";
        int t = 0;
 
        for (int i = 0; i < s.size(); ++i) {
            int x = s[i] - '0';
            if (x % 2) {
                if (t == 0) {
                    s1 += (x / 2) + '0';
                    s2 += (x / 2 + 1) + '0';
                    t = 1;
                } else {
                    s1 += (x / 2 + 1) + '0';
                    s2 += (x / 2) + '0';
                    t = 0;
                }
            } else {
                s1 += (x / 2) + '0';
                s2 += (x / 2) + '0';
            }
        }
 
        int xx = stoll(s1);
        int yy = stoll(s2);
 
        cout << xx << " " << yy << endl;
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