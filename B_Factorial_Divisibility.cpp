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
    ll n,x,a;
    cin>>n>>x;
    map <ll,ll> m1;
    for (int i=0; i<n; i++){
        cin>>a;
        m1[a]++;
    }
    for (int i=1; i<x; i++){
       if (m1[i]%(i+1)){
        cout<<"No\n";
        return;
       }
       m1[i+1] += m1[i]/(i+1);
    }
    cout<<"Yes\n";
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