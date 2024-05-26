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
    ll n,k;
    cin>>n>>k;
    double one = 0;
    double prevX = 0, prevY = 0;
    for (int i=0; i<n; i++) {
        double x,y;
        cin>>x>>y;
        if (i==0) prevX = x, prevY = y;
        else {
            double temp = sqrt((prevX - x) * (prevX - x) + (prevY - y) * (prevY - y));
            // cout<<temp<<" ! \n";
            one += temp;
            // one += sqrt((prevX - x) * (prevX - x) + (prevY - y) * (prevY - y));
            prevX = x, prevY = y;
        }
    }
    // cout<<one<<"\n";
    one *= k;
    one /= 50;
    // one *= 0.05;
    cout<<fixed<<setprecision(9)<<one<<"\n";
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