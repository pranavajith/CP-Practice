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
    bool check = false;
    vector <ll> v;
    for (int i=0; i<n; i++) {
        ll a; cin>>a;
        if (a==1) check = true;
        if (check){
            v.push_back(a);
        }
    }
    while (!v.empty() && v.back() == 0) v.pop_back();
    if (v.empty()) {
        cout<<0<<"\n";
        return;
    }
    ll home = 0, temp = 0;
    for (int i=0; i<v.size(); i++){
        if (v[i] == 0) temp++;
        else {
            if (temp>=2) home += temp; temp = 0;
        }
    }
    cout<<v.size() - home<<"\n";
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