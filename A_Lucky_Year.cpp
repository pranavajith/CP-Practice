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
    string s2;
    if (s[0] == '9'){
        s2 += '1';
        for (int i=0; i<s.size(); i++) s2 += '0';
    }
    else {
        s2 += s[0]+1;
        for (int i=0; i<s.size()-1; i++) s2 += '0';
    }
    ll a1 = stoll(s), a2 = stoll(s2);
    cout<<a2-a1<<"\n";
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