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
    ll n, m;
    cin>>n>>m;
    string s;
    cin>>s;
    if (count(s.begin(), s.end(), 'B') == m){
        cout<<0<<"\n";
    }
    else if ((count(s.begin(), s.end(), 'B') > m)){
        cout<<1<<"\n";
        ll i = 0, countb = 0;
        while (countb != (count(s.begin(), s.end(), 'B') - m)){
            if (s[i] == 'B') countb++;
            i++;
        }
        cout<<i<<" A\n";
    }
    else {
        cout<<1<<"\n";
        ll i = 0, counta = 0;
        while (counta != m - count(s.begin(), s.end(), 'B')){
            if (s[i]=='A')counta++;
            i++;
        }
        cout<<i<<" B\n";
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