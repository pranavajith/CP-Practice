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
    ll n, k;
    cin>>n>>k;
    ll rem = 0;
    for (int i=0; i<n; i++){
        ll a; cin>>a;
        rem += a;
        if (rem > 8) {
            rem -= 8;
            k-=8;
        }
        else {
            k -= rem;
            rem = 0;
        }
        if (k <= 0) {
                cout<<i+1<<"\n"; return;
            }
    }
    cout<<-1<<"\n";
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