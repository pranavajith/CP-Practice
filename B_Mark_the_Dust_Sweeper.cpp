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
    ll n; cin>>n;
    vector <ll> v(n); for (int i=0; i<n; i++) cin>>v[i];
    v.pop_back(); n--;
    reverse(v.begin(), v.end()); 
    for (int i=n-1; i>=0; i--){
        if (v[i]!=0)break;
        v.pop_back();
    }
    if (v.size()==0){
        cout<<0<<"\n";
        return;
    }
    reverse(v.begin(), v.end());
    n = v.size();
    cout<<accumulate(v.begin(), v.end(), 0LL) + count(v.begin(), v.end(), 0)<<"\n";
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