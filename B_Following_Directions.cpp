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
    ll n, x = 0, y = 0; string s; bool check = false;
    cin>>n>>s;
    for (int i=0; i<n; i++){
        if (s[i]=='L'){
            x--;
        }
        else if (s[i]=='R'){
            x++;
        }
        else if (s[i]=='U'){
            y++;
        }
        else if (s[i]=='D'){
            y--;
        }
        if (x==1 && y==1) check = true;
    }
    if (check)cout<<"YES\n";
    else cout<<"NO\n";
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