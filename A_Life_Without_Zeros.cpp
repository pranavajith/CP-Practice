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
    string s1,s2;
    cin>>s1>>s2;
    ll n1 = stoll(s1), n2 = stoll(s2);
    string news1; for (auto d:s1) if (d!='0') news1+=d;
    string news2; for (auto d:s2) if (d!='0') news2+=d;
    ll n3 = stoll(news1), n4 = stoll(news2);
    string ansof12 = to_string(n1 + n2);
    string newslol; for (auto d:ansof12) if (d!='0') newslol += d;
    if (stoll(newslol) == n3 + n4) cout<<"YES\n";
    else cout<<"NO\n";
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