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
    ll a,b,m,r;
    cin>>a>>b>>m>>r;
    ll curans = r;
    map <ll,ll> ind;
    ll i = 0;
    while (true){
        curans = (a*curans + b)%m;
        if (ind[curans]){
            cout<<i-ind[curans]<<"\n";
            break;
        }
        ind[curans]=i++;
    } 
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