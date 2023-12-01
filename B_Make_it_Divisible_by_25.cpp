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
    string s; cin>>s;
    // ll a25 = INT_MAX, a00 = INT_MAX, a75 = INT_MAX, a50 = INT_MAX;
    // ll count2 = 0, count0 = 0, count7 = 0, count5 = 0;
    bool check0 = false, check5 = false;
    reverse(s.begin(), s.end());
    for (int i=0; i<s.size(); i++){
        if ((s[i] == '5' || s[i] == '0') && check0) {
            cout<<i-1<<"\n"; break;
        }
        if ((s[i] == '7' || s[i] == '2') && check5) {
            cout<<i-1<<"\n"; break;
        }
        if (s[i] == '0') check0 = true;
        if (s[i] == '5') check5 = true;
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