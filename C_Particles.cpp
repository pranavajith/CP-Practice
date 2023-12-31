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
    vector <ll> v;
    bool check = false;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        if (a>0)check = true;
        v.push_back(a);
    }
    if (check){
    ll evensum = 0, oddsum = 0;
    for (int i=0;i<n;i+=2){
        oddsum+=max(0LL, v[i]);
    }
    for (int i=1;i<n;i+=2){
        evensum+=max(0LL, v[i]);
    }
    cout<<max(oddsum, evensum)<<"\n";
    }
    else{
        cout<<*max_element(v.begin(),v.end())<<"\n";
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