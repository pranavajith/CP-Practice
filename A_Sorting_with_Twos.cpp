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

vector <ll> pow2;
void solve(){
    ll n;
    cin>>n;
    vector <ll> v(n);
    for (int i=0; i<n; i++) cin>>v[i];
    for (int i=1; i<n; i++){
        if (v[i-1] > v[i] && count(pow2.begin(), pow2.end(), i) == 0){
            cout<<"NO\n";
            // cout<<i;
            return;
        }
    }
    cout<<"YES\n";
}

int main() 
{
    pow2.push_back(1);
    for (int i=0; i<5; i++){
        pow2.push_back(pow2.back()*2);
    }
    // for (auto d:pow2)cout<<d<<" ";
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    ll t; cin>>t; while(t--)
        solve();
    return 0;
}