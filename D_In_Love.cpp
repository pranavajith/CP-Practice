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

struct first{
    bool operator()(const pair<ll,ll> &a, const pair<ll,ll> &b) const{
        return a.first > b.first;
    }
};
struct second{
    bool operator()(const pair<ll,ll> &a, const pair<ll,ll> &b) const{
        return a.second < b.second;
    }
};

void solve(){
    ll n;
    cin>>n;
    char c; ll a,b;
    multiset <pair<ll,ll>, first> f;
    multiset <pair<ll,ll>, second> s;
    for (int i=0; i<n; i++){
        cin>>c>>a>>b;
        pair <ll,ll> p; p.first = a; p.second = b;
        if (i==0){
            f.insert(p); s.insert(p);
            cout<<"NO\n";
        }
        else{
            if (c=='-'){
                f.erase(f.find(p)); s.erase(s.find(p));
            }
            else{
                f.insert(p); s.insert(p);
            }
            if (f.size()==1 || f.size()==0){
                cout<<"NO\n";
                continue;
            }
            pair <ll,ll> p1 = (*f.begin());
            pair <ll,ll> p2 = (*s.begin());
            // cout<<p1.first<<" "<<p1.second<<" !\n";
            // cout<<p2.first<<" "<<p2.second<<" !\n";

            if (p1==p2 || p1.first <= p2.second)cout<<"NO\n";
            else cout<<"YES\n";
        }
    }
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