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
    ll n,l,r;
    cin>>n>>l>>r;
    ll minimal = 0, maximal = 0;
    ll curel = 1, diff = 0;
    while (diff < l) {
        diff++;
        minimal += curel;
        curel *= 2;
    }
    // cout<<minimal<<"! ";
    minimal += n - l;
    diff = 0, curel = 1;
    while (diff < r) {
        diff++;
        maximal += curel;
        curel *= 2;
    }
    maximal += (n-r)*curel/2;
    cout<<minimal<<" "<<maximal<<"\n";
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