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
    ll n; cin>>n;
    string s; cin>>s;
    if (count(s.begin(), s.end(), 'B') == n || count(s.begin(), s.end(), 'A') == n) cout<<0<<"\n";
    else {
        ll iterA = -1, iterB = n-1;
        for (int i=0; i<n; i++){
            if (s[i] == 'B') iterB = i;
            if (s[i] == 'A' && iterA == -1) iterA = i;
        }
        if (iterA > iterB) cout<<0<<"\n";
        else cout<<iterB - iterA<<"\n";
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