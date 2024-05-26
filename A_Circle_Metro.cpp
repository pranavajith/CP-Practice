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
    ll n,a,x,b,y;
    cin>>n>>a>>x>>b>>y;
    a--, b--, x--, y--;
    while (true){
        if (a==b) {
            cout<<"YES\n";
            return;
        }
        if (a==x || b==y) break;
        a = (a+1)%n;
        b = (b-1+n)%n;
    }
    cout<<"NO\n";
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