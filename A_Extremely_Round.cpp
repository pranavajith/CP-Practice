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

vector <ll> v;

bool check(ll n){
    ll cnt = 0;
    while (n){
        if (n%10 != 0) cnt++;
        if (cnt > 1) return false;
        n/=10;
    }
    return true;
}

void solve(){
    ll n;
    cin>>n;
    cout<<v[n-1]<<"\n";
}

int main() 
{
    ll cnt = 0;
    for (int i=1; i<=999999; i++){
        if (check(i)) cnt++;
        v.push_back(cnt);
    }
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    ll t; cin>>t; while(t--)
        solve();
    return 0;
}