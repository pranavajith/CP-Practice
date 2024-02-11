#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <queue>
#include <stack>
#include <algorithm>
#include <limits>
#include <iomanip>
using namespace std;
#define ll long long
ll mod = 1e9 + 7;
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n,p,l,t;
    cin>>n>>p>>l>>t;
    ll tottasks = (n-1)/7 + 1;
    ll timefortottasks = (tottasks/2) + (tottasks%2);
    if (tottasks * t + timefortottasks * l >= p){
        ll reqdays1; double p1 = p;
        reqdays1 = ceil(p1/(2*t + l));
        cout<<n-reqdays1<<"\n";
    }
    else{
        // cout<<"ok";
        p-=(tottasks * t + timefortottasks * l);
        n-=timefortottasks;
        double p2 = p;
        ll reqdays2 = ceil(p2/l);
        // cout<<n<<" "<<p<<" ";
        cout<<n-reqdays2<<"\n";
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