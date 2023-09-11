#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n;
    cin>>n;
    set <ll> s;
    map <ll,vector<ll> > m;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        if (m[a].size()>0 /* && (count(m[a].begin(),m[a].end(),i-1) == 0) || i==0 */ ){
            s.insert(a);
        }
        m[a].push_back(i);
    }
    if (s.size()==0){
        cout<<"NO\n";
    }
    else{
        for (auto d:s){
            ll minof = *min_element(m[d].begin(),m[d].end());
            ll maxof = *max_element(m[d].begin(),m[d].end());
            if (maxof - minof > 1){
                cout<<"YES\n";
                return;
            }
        }
        cout<<"NO\n";
    }
}

int main() 
{
    // lTxtIO;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}