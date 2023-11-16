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
    ll n,m,a,x,y,x1,y1;
    cin>>n>>m>>a;
    cin>>x>>y;
    bool check = false;  
    for (int i=0; i<a; i++){
        cin>>x1>>y1;
        if (!check && ((x+y)%2) == ((x1+y1)%2)) {
            cout<<"NO\n";
           check = true;
        }
    }
    if (!check) cout<<"YES\n";
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