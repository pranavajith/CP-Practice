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

void printlol(set <pair <ll,ll> > s){
    for (auto it = s.begin(); it!=s.end(); it++) {
        cout<<(*it).first<<":"<<(*it).second<<", ";
    }
    cout<<"\n";
}
void solve(){
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    set <pair <ll,ll> > se;
    vector <ll> left(n, 0), right(n, n-1);
    for (int i=1; i<n; i++) {
        if (s[i-1] == '1') left[i] = i;
        else left[i] = left[i-1];
    }
    for (int i=n-2; i>=0; i--) {
        if (s[i+1] == '0') right[i] = i;
        else right[i] = right[i+1];
    }
    map < pair <ll,ll>, bool> m;
    // cout<<"left : "; for (auto d:left) cout<<d<<" "; cout<<"\n";
    // cout<<"right : "; for (auto d:right) cout<<d<<" "; cout<<"\n";
    ll leftiter = 0, rightiter = 0;
    while (leftiter < n && s[leftiter] == '1') leftiter++; rightiter = leftiter+1;
    bool check = false;
    if (is_sorted(s.begin(), s.end())) check = true;
    for (int i=0; i<n; i++) m[make_pair(i,i)] = true;
    while (rightiter < n) {
        while (rightiter < n && !(s[rightiter]=='0' && s[rightiter-1]=='1')) rightiter++;
        // cout<<"("<<leftiter<<": "<<rightiter-1<<") ";
        m[make_pair(leftiter, rightiter-1)] = true;
        leftiter = rightiter;
        rightiter++;
    }
    // cout<<"\n";
    ll a,b;
    for (int i=0; i<k; i++) {
        cin>>a>>b;
        pair <ll,ll> p = make_pair(left[a-1], right[b-1]);
        if  (m[p]) {
            se.insert(make_pair(-1, -1));
            // cout<<"ok1\n";
        }
        else {
            se.insert(p);
            // cout<<"ok2\n";
        }
    }

    if (check) cout<<1<<"\n";
    else {
        cout<<se.size()<<"\n";
    }

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