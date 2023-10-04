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
    ll n,k;
    cin>>n>>k;
    vector <ll> v;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        v.push_back(a);
    }
    map <ll,ll> m;
    for (int i=0;i<n;i++){
        // cout<<"i: "<<i<<"\n";
        if (v[i]!=0){
            while (v[i]>0){
                // cout<<v[i]<<"\n";
                ll a = 1, count1 = 0;
                while (a*k<=v[i]){
                    count1++;
                    a*=k;
                }
                // cout<<"count: "<<count1<<"\n";
                m[count1]++;
                v[i]-=a;
            }
            if (v[i]<0){
                // cout<<"NO\n";
                return;
            }
        }
        // cout<<"\n\n";
    }
    for (auto d:m){
        // cout<<d.first<<" "<<d.second<<"\n";
        if (d.second > 1){
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