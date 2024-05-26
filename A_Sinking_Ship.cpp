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
    cin>>n;
    vector <pair<pair<ll,ll>, string> > v;
    for (ll i=0; i<n; i++){
        string a,b;
        cin>>a>>b;
        ll temp = 0;
        if (b=="woman" || b=="child") temp = 1;
        else if (b == "man") temp = 2;
        else if (b == "captain") temp = 3;
        v.push_back(make_pair(make_pair(temp, i), a));
    }
    sort(v.begin(), v.end());
    for (auto d:v){
        cout<<d.second<<"\n";
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