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
    vector <ll> v(n); 
    for (int i=0; i<n; i++) cin>>v[i];
    vector <ll> ans(n,1);
    vector < vector <ll> > ind(101);
    for (int i=0; i<n; i++) {
        ind[v[i]].push_back(i);
    }
    ll check = 0;
    for (auto d:ind) {
        if (d.size() == n){
            cout<<-1<<"\n";
            return;
        }
        if (d.size() > 1) check++;
    }
    if (check < 2) {
        cout<<-1<<"\n";
        return;
    }
    bool check1 = false, check2 = false;
    for (auto d:ind) {
        if (d.size() > 1) {
            if (!check1) {
                ans[d.back()] = 2;
                check1 = true;
            }
            else {
                ans[d.back()] = 3;
                break;
            }
        }
    }
    for (auto d:ans) cout<<d<<" "; cout<<"\n";
    
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