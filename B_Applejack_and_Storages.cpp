#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <algorithm>
#include <limits>
#include <iomanip>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n, count4 = 0, count2 = 0;
    cin>>n;
    vector <ll> cnt(1e5, 0);
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        cnt[a]++;
    }
    ll total2 = 0;
    ll total4 = 0;
    for (int i=0;i<1e5;i++){
        total2+=cnt[i]/2;
        total4+=cnt[i]/4;
    }
    ll m;
    cin>>m;
    while (m--){
        char c; ll a;
        cin>>c>>a;
        total2-=cnt[a]/2;
        total4-=cnt[a]/4;
        if (c=='+')cnt[a]++;
        else cnt[a]--;
        total2+=cnt[a]/2;
        total4+=cnt[a]/4;
        if (total4 >=1 && total2>=4)cout<<"YES\n";
        else cout<<"NO\n";
    }
    
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