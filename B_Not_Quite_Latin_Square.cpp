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
    string a,b,c;
    cin>>a>>b>>c;
    string lol;
    if (count(a.begin(), a.end(), '?')) lol = a;
    else if (count(b.begin(), b.end(), '?')) lol = b;
    else lol = c;
    if (count(lol.begin(), lol.end(), 'A') == 0) cout<<"A\n";
    else if (count(lol.begin(), lol.end(), 'B') == 0) cout<<"B\n";
    else cout<<"C\n";
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