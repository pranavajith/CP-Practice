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

vector <vector <ll> > pref;


void solve(){
    ll l,r;
    cin>>l>>r;
    ll ans = -1;
    for (int i=0; i<=30; i++){
        ans = max(pref[i][r] - pref[i][l-1], ans);
    }
    cout<<r - l + 1 - ans <<"\n";
}


int main() 
{
    
    for (int i=0; i<=30; i++){
        vector <ll> temp(2e5 + 1);
        ll ans = 0;
        for (int j=0; j<=2e5; j++){
            if ((j>>i) & 1) ans++;
            temp[j] = ans;
        }
        pref.push_back(temp);
    }
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    ll t; cin>>t; while(t--)
        solve();
    return 0;
}