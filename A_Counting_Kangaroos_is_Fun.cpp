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
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n;
    cin>>n;
    vector <ll> v(n);
    for (int i=0;i<n; i++)cin>>v[i];
    sort(v.begin(), v.end());
    vector <ll> big, small;
    for (int i=0; i<n; i++){
        if (i<n/2){
            small.push_back(v[i]);
        }
        else{
            big.push_back(v[i]);
        }
    }
    queue <ll> q; 
    ll bigiter = 0, removed = 0;
    sort(big.rbegin(), big.rend());
    sort(small.rbegin(), small.rend());
    for (int i=0; i<small.size(); i++){
        if (small[i]*2 <= big[bigiter]){
            bigiter++;
            removed++;
        }
    }
    cout<<big.size() + small.size() - removed<<"\n";
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