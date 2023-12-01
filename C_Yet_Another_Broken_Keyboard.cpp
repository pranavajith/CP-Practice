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
    ll n,q; char c;
    cin>>n>>q;
    string s;
    cin>>s;
    map <char, bool> m;
    for (int i=0; i<q; i++){
        cin>>c;
        m[c]=true;
    }
    ll ans = 0, cursiz = 0;
    for (int i=0; i<n; i++){
        if (m[s[i]])cursiz++;
        else{
            ans+=cursiz*(cursiz+1)/2;
            cursiz = 0;
        }
    }
    ans+=cursiz*(cursiz+1)/2;
    cout<<ans<<"\n";
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