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

vector <ll> check(1e7, 0);

void solve(){
    ll n;
    cin>>n;
    if (check[n])cout<<"YES\n";
    else cout<<"NO\n";
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for (ll i = 2; 1+i+i*i <=1e6 ;i++){
        ll p = i*i*i;
        ll temp = 1+i+i*i;
        for (int j=0;j<20;j++){
            check[temp]=1;
            temp+=p;
            p*=i;
            if (temp>1e6)break;
        }
    }   
    // TxtIO;
    ll t; cin>>t; while(t--)
        solve();
    return 0;
}