#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
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
    map <ll,ll> even1, odd1, even2, odd2;
    for (int i=0; i<n; i++){
        cin>>v[i];
        if (i%2)odd1[v[i]]++;
        else even1[v[i]]++;
    }
    
    sort(v.begin(), v.end());
    for (int i=0; i<n; i++){
        // cin>>v[i];
        if (i%2)odd2[v[i]]++;
        else even2[v[i]]++;
    }
    // cout<<"ok";
    // for (auto d:odd1)cout<<d.first<<" "<<d.second<<"\n"; cout<<"\n";
    // for (auto d:even1)cout<<d.first<<" "<<d.second<<"\n"; cout<<"\n\n";
    // for (auto d:odd2)cout<<d.first<<" "<<d.second<<"\n"; cout<<"\n";
    // for (auto d:even2)cout<<d.first<<" "<<d.second<<"\n"; cout<<"\n\n";
    for (int i=0; i<n; i++){
        if (odd1[v[i]]!=odd2[v[i]] || even1[v[i]]!=even2[v[i]]){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
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