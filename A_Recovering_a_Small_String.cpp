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
    // for (int i=0; i<)
    string s;
    if (n<=53) {
        s += 'a'; n-=1;
    }
    else {
        s += char('a' + n - 53);
        n = 52;
    }
    if (n <= 27) {
        s += 'a'; n-=1;
    }
    else {
        s += char('a' + n - 27);
        n = 26;
    }
    s += char('a' + n - 1);
    cout<<s<<"\n";
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