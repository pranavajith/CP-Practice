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
    ll n,a,b;
    cin>>n;
    vector <pair <ll,ll> > v;
    pair <ll,ll> p;
    for (int i=0; i<n; i++){
        cin>>a>>b;
        p.first = b; p.second = a;
        v.push_back(p);
    }
    sort(v.rbegin(), v.rend());
    ll money = 0;
    ll l = 0, r = n-1;
    ll curcount = 0;
    while (l<=r) {
        while (l<=r && v[r].first <= curcount){
            curcount += v[r].second;
            money += v[r].second;
            r--;
        }
        // cout<<r<<"!\n";
        // cout<<"after loop : "<<money<<" "<<r<<"\n";
        if (l>r)break;
        if (v[l].second + curcount > v[r].first) {
            money += 2*(v[r].first - curcount);
            v[l].second -= v[r].first - curcount;
            curcount = v[r].first;
            
        }
        else {
            money += 2*(v[l].second);
            curcount += v[l].second;
            l++;
        }
        // cout<<"before next loop : "<<money<<" "<<curcount<<" "<<r<<" "<<l<<"\n";
        
    }
    cout<<money<<"\n";
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