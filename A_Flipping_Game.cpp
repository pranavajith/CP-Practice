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
    ll n, init1=0;
    cin>>n;
    vector <ll> v;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        if (a==1){
            init1++;
            v.push_back(-1);
        }
        else v.push_back(1);
    }
    // cout<<v[0]<<"! ";
    ll s=v[0], max_index=0, min_index=0, max=s, t=0;
    for (int i=1;i<n;i++){
        if (s>0){
            s = s + v[i];
        }
        else{
            s = v[i];
            t = i;
        }
        if (s > max){
            max = s;
            // min_index = t;
            // max_index = i;
        }
    }
    cout<<init1+max<<"\n";
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