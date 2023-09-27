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

bool sort1(vector <ll> v1, vector <ll> v2){
    return (v1[0]-v1[1]) < (v2[0]-v2[1]);
}

void solve(){
    ll n;
    cin>>n;


    // vector <ll> a(n);
    // vector <ll> b(n);
    // for (ll i=0;i<n;i++)cin>>a[i];
    // for (ll i=0;i<n;i++)cin>>b[i];
    // map <ll,ll> m;
    // ll max1 = LLONG_MIN;
    // vector <ll> sol;
    // for (ll i=0;i<n;i++){
    //     ll diff = a[i]-b[i];
    //     m[diff]++;
    //     sol.push_back(diff);
        
    // }
    // sort(sol.begin(),sol.end());
    // auto w = unique(sol.begin(),sol.end());
    // sol.resize(distance(sol.begin(),w));
    // ll n2=sol.size();
    // ll fin=0;
    // for (auto d:sol)cout<<d<<" ";cout<<"\n";
    // // for (auto d:m)cout<<d.first<<" : "<<d.second<<"\n";cout<<"end\n";
    // for (ll i = 0;i<n;i++){
    //     ll diff = a[i]-b[i];
    //     ll a = upper_bound(sol.begin(),sol.end(),-1*diff)-sol.begin();
        
    //     cout<<i<<" "<<diff<<" "<<a<<"\n";
    //     for (int j=a;j<n2;j++){
    //         fin+=m[sol[j]];
    //         if (sol[j]==diff)fin--;
    //     }
    // }
    // cout<<fin<<"\n";

    vector < vector <ll> > v;
    vector <ll> a(n);
    vector <ll> b(n);
    for (int i=0;i<n;i++)cin>>a[i];
    for (int i=0;i<n;i++)cin>>b[i];
    for (int i=0;i<n;i++){
        vector <ll> temp;
        // ll a,b;
        // cin>>a>>b;
        temp.push_back(a[i]);
        temp.push_back(b[i]);
        v.push_back(temp);
    }
    sort(v.begin(),v.end(),sort1);
    // for (auto d:v)cout<<d[0]<<" "<<d[1]<<"\n";
    ll l = 0, r = n - 1, sol = 0;
    while (l<=r){
        while (l<r && (((v[l][0]-v[l][1]) + (v[r][0] - v[r][1]) )<= 0))l++;
        // cout<<l<<" "<<r<<"\n"; 
        sol+=r-(l);
        r--;
    }
    cout<<sol<<"\n";

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