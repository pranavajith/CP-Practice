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
    for (int i=0;i<n;i++)cin>>v[i];
    if (n%2)cout<<"YES\n";
    else{
        vector <ll> v1;
        for (int i=1;i<n;i++){
            v1.push_back(v[i]-v[i-1]);
        }
        ll sum1=0;
        for (int i=0;i<v1.size();i+=2){
            sum1+=v1[i];
        }
        if (sum1>=0)cout<<"YES\n";
        else cout<<"NO\n";
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