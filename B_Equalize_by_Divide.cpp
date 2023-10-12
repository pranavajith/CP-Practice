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
    for (int i=0; i<n; i++)cin>>v[i];
    // sort(v.begin(), v.end());
    if (count(v.begin(), v.end(), v[0])==n){
        cout<<0<<"\n";
    }
    else{
        if (*min_element(v.begin(), v.end())==1){
            cout<<-1<<"\n";
            return;
        }
        vector <pair<ll,ll> > sol;
        // cout<<"hey1";
       while (count(v.begin(), v.end(), v[0]) != n){
        ll a = *max_element(v.begin(), v.end());
        ll b = *min_element(v.begin(), v.end());
        // cout<<a<<" "<<b<<"\n";
        ll itera = find(v.begin(), v.end(), a)-v.begin();
        ll iterb = find(v.begin(), v.end(), b)-v.begin();
        sol.push_back(make_pair(itera+1, iterb+1));
        if (a%b==0)v[itera]/=v[iterb];
        else v[itera] = v[itera]/v[iterb]+1;
       }
       cout<<sol.size()<<"\n";
       for (auto d:sol){
        cout<<d.first<<" "<<d.second<<"\n";
       }
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