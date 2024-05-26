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

bool f(string a, string b, ll n, ll curx, ll cury){
    if (curx == n-1) return true;
    bool check = false;
    if (cury == 0) {
        if (a[curx+1] == '0') check |= f(a, b, n, curx+1, cury);
        if (b[curx+1] == '0') check |= f(a, b, n, curx+1, cury+1);
    }
    else {
        if (a[curx+1] == '0') check |= f(a, b, n, curx+1, cury-1);
        if (b[curx+1] == '0') check |= f(a, b, n, curx+1, cury);
    }
    return check;
}

void solve(){
    ll n; cin>>n;
    string a,b; cin>>a>>b;
    for (int i=0; i<n-1; i++){
        if (a[i] == '1' && b[i] == '1') {
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
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