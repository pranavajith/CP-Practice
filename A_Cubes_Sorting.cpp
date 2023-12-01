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
    ll n,a; cin>>n; bool check = false;
    vector <ll> v;
    set <ll> s;
    for (int i=0; i<n; i++) {
        cin>>a;
        s.insert(a);
        v.push_back(a);
    }
    if (s.size() != n){
        cout<<"YES\n";
        return;
    }
    vector <ll> v1 (v.begin(), v.end()), v2(v.begin(), v.end());
    sort(v1.begin(), v1.end());
    sort(v2.rbegin(), v2.rend());
    if (v==v2 && v!=v1) cout<<"NO\n";
    else cout<<"YES"<<"\n";
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