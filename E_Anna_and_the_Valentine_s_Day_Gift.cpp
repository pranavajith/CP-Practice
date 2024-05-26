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
    ll n,m;
    cin>>n>>m;
    priority_queue <ll> q;
    ll nonzero = 0;
    deque <ll> d;
    ll tot = 0, totminzer = 0;
    for (int i=0; i<n; i++){
        string s;
        cin>>s;
        tot += s.size();
        ll cnt = 0;
        for (int i=s.size()-1; i>=0; i--) {
            if (s[i] != '0') break;
            cnt++;
        }
        // if (cnt == 0) nonzero++;
        if (cnt != 0) q.push(cnt);
    }
    // while (q.size()) {
    //     ll t = q.top();
    //     d.push_front(t); q.pop();
    // }
    // while (d.size()) {
    //     tot -= d.back();
    //     d.pop_back();
    // }
    if (q.size() == 0) {
        if (tot <= m) cout<<"Anna\n";
        else cout<<"Sasha\n";
        return;
    }
    // cout<<tot<<"\n";
    ll t = q.top(); tot -= t; q.pop();
        if (tot <= m) {
        cout<<"Anna\n";
        return;
    }
    while (q.size()) {
        q.pop();
        if (q.size() == 0) break;
        tot -= q.top(); q.pop();
        if (tot <= m) {
            cout<<"Anna\n";
            return;
        }
    }
    cout<<"Sasha\n";

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