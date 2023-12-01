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

bool check(vector <ll> v, ll ind, ll cursum, ll n){
    if (ind == n) {
        if (cursum%360==0) return true;
        else return false;
    }
    return check(v, ind+1, cursum-v[ind], n) || check(v, ind+1, cursum+v[ind], n);
}

void solve(){
    ll n;
    cin>>n;
    vector <ll> v(n);
    for (int i=0; i<n; i++) cin>>v[i];
    if (check(v, 1, v[0], n) || (check(v, 1, -1*v[0], n))) cout<<"YES\n";
    else cout<<"NO\n";

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