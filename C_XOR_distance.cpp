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

ll big(ll i) {
    ll a = 1;
    while (i--) a*=2;
    return a;
}

void solve(){
    // cout<<big(2)<<"\n";
    // return;
    ll a,b,x;
    cin>>a>>b>>x;
    if (x==0) {
        cout<<abs(a-b)<<"\n";
        return;
    }
    ll lol = 0, check = 0;
    ll minterm = min(a,b), maxterm = max(a,b);
    ll j = 0, check1 = 1;
    while (check1 <= (double)maxterm/2) {
        j++;
        check1 *= 2;
        // cout<<check1<<"!\n";

    }
    // j--;
    cout<<j<<"\n";
    for (ll i=j; i>=0; i--){
        // cout<<big(i)<<"\n";
        cout<<((ll)1<<(i))<<" oooo ";
        if ((!((minterm>>i) & 1LL) || (minterm < ((ll)1<<i))) && ((maxterm>>i) & 1LL)) {
            // cout<<i<<"! ";
            // if ((lol + (1<<i)) > x) continue;
            if ((lol +(1<<i)) > x) continue;
            // cout<<(1<<i)<<" ";
            lol += (1<<i);
            // cout<<lol<<" !\n";
        }
        
    }
    // cout<<lol<<" ";
    cout<<abs((a^lol) - (b^lol))<<"\n";
    // cout<<lol<<" ! "<<(a^lol)<<" ! "<<(b^lol)<<" !!\n";
    // for (int i=0; i<=x; i++) {
    //     cout<<abs((a^i) - (b^i))<<"\n";
    // }
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