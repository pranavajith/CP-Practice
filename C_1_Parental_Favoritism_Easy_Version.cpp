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
    string s;
    cin>>n>>s;
    ll q;
    cin>>q;
    while (q--){
        ll a,b,c,d, ans = 0;
        cin>>a>>b>>c>>d;
        // completely inside
        if (a<=c && b>=d) {
            ans = (b-d) + (c-a)*2;
        }
        // covering
        else if (a>c && b<d){
            ans = (a-c)*2 + d-b;
        }
        // left side
        else if (a>c){
            ans = (a-c)*2 + b-d;
        }
        // right side
        else {
            ans = (c-a)*2 + d-b;
        }
        cout<<ans<<"\n";
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