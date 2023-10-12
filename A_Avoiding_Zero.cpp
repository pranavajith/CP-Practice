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
    vector <ll> v1, v2;
    for (int i=0; i<n; i++){
        ll a;
        cin>>a;
        if (a>0)v1.push_back(a);
        else v2.push_back(a);
    }
    ll sum1 = accumulate(v1.begin(), v1.end(), 0LL);
    ll sum2 = accumulate(v2.begin(), v2.end(), 0LL);
    sort(v2.begin(), v2.end());
    if (sum1 + sum2 == 0){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
        if (sum1 > abs(sum2)){
            for (auto d:v1)cout<<d<<" ";
            for (auto d:v2)cout<<d<<" ";
            cout<<"\n";
        }
        else{ 
            // if (v2[0]==0)sort(v2.begin(), v2.end());
            for (auto d:v2)cout<<d<<" ";
            for (auto d:v1)cout<<d<<" ";
            cout<<"\n";
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