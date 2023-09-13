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
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        v.push_back(a);
    }
    ll a=0,b=0, sol = 0;
    while (true){
        if (a==n-1)break;
        if (v[b+1] < v[b] || b==n-1){
            sol = max(sol, b-a+1);
            a=b+1;
            if (b==n-1)break;
            b++;
        }
        else{
            b++;
        }
    }
    if (n==1)sol++;
    cout<<sol<<"\n";
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    // ll t;
    // cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}