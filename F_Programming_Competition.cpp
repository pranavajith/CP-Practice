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
    ll n,a;
    cin>>n;
    vector <vector <ll> > v(n+1);
    for (int i=0; i<n-1; i++){
        cin>>a;
        v[a].push_back(i+2);
    }
    // for (int i=0; i<v.size(); i++){
    //     cout<<i<<" : "; for (auto d:v[i]) cout<<d<<" "; cout<<"\n";
    // }
    queue <ll> q1; ll ans = 0, count1 = 0;
    q1.push(1);
    bool check = false;
    while (q1.size()) {
        ll top = q1.front();
        q1.pop();
        if (v[top].size() == 0) {
            continue;
        }
        else if (v[top].size() == 1) {
            if (check) {
                check = false;
                ans++;
            }
            q1.push(v[top][0]);
        }
        else {
            ll siz = v[top].size();
            for (auto d:v[top]) {
                q1.push(d);
            }
            if (check) {
                check = false;
                ans ++;
                siz--;
            }
            if (siz % 2) check = true;
            ans += siz/2;
        }
        // queue <ll> q2; for (int i=0; i<q1.size(); i++) {cout<<q1.front()<<" "; q2.push(q1.front()); q1.pop();} q1 = q2; cout<<"\n";
        // cout<<ans<<"\n";
    }
    cout<<ans<<"\n";
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