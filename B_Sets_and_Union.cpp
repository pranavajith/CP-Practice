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
    vector < vector <ll> > v;
    vector < set <ll> > vslol;
    set <ll> s;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        vector <ll> temp (51, 0);
        set <ll> vslol1;
        for (int j=0;j<a;j++){
            ll b;
            cin>>b;
            temp[b]=1;
            vslol1.insert(b);
            s.insert(b);
        }
        vslol.push_back(vslol1);
        v.push_back(temp);
    }
    ll sol = INT_MIN;
    for (auto it = s.begin(); it!=s.end(); it++){
        // cout<<*it<<" ";
        // ll temp1=0;
        // vector <ll> a(51,0);
        set <ll> a;
        for (int i=0;i<n;i++){
            if (v[i][*it]==0){
                // cout<<"!! "<<i<<" ";
                a.insert(vslol[i].begin(),vslol[i].end());
            }
        }
        ll w = a.size();
        sol = max(sol, w);
    }
    cout<<sol<<"\n";
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