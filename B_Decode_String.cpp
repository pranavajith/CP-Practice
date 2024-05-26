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
    ll n;
    cin>>n;
    string s;
    cin>>s;
    string sol;
    for (int i=n-1; i>=0; i--){
        if (s[i] == '0') {
            string temp;
            temp += s[i-2]; temp += s[i-1];
            ll lol = stoi(temp);
            sol += char('a' + lol - 1);
            i-=2;
        } 
        else sol += char('a' + (s[i] - '0') - 1);
    }
    reverse(sol.begin(), sol.end());
    cout<<sol<<"\n";
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