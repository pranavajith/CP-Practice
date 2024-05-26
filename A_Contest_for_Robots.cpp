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
    ll n; cin>>n;
    ll leftOnly = 0, rightOnly = 0;
    vector <ll> v1(n), v2(n);
    for (int i=0; i<n; i++) cin>>v1[i];
    for (int i=0; i<n; i++) cin>>v2[i];
    for (int i=0; i<n; i++){
        if (v1[i] && !v2[i]) leftOnly++;
        else if (!v1[i] && v2[i]) rightOnly++;
    }
    // rightOnly++;
    if (!leftOnly) {
        cout<<-1<<"\n";
        return;
    }
    if ((rightOnly+1) % leftOnly == 0) cout<<(rightOnly+1) / leftOnly<<"\n";
    else cout<<(rightOnly+1) / leftOnly + 1 <<"\n";
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