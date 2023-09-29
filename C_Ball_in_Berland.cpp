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
    ll a,b,k;
    cin>>a>>b>>k;
    vector <pair <ll,ll> > v;
    vector <ll> tempa(k);
    vector <ll> tempb(k);
    for (int i=0;i<k;i++)cin>>tempa[i];
    for (int i=0;i<k;i++)cin>>tempb[i];
    map <ll,ll> mfirst;
    map <ll,ll> msecond;
    for (int i=0;i<k;i++){
        v.push_back(make_pair(tempa[i], tempb[i]));
        mfirst[tempa[i]]++;
        msecond[tempb[i]]++;
    }
    // for (auto d:v)cout<<d.first<<" "<<d.second<<"\n";
    // cout<<"\n\n";
    ll count1=0;
    // bool check = false;
    for (int i=0;i<k;i++){
        // if (k-mfirst[v[i].first]-msecond[v[i].second]+1){
            // check = true;
            // cout<<i<<" "<<k-mfirst[v[i].first]-msecond[v[i].second]+1<<"\n";
            count1+=k-mfirst[v[i].first]-msecond[v[i].second]+1;
            // }
    }
    // if (check)cout<<count1/2<<"\n";
    // else cout<<0<<"\n";
    cout<<count1/2<<"\n";

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