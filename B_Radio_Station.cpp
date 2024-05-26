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
    ll n,m;
     cin>>n>>m;
     map <string, string> m1;
    for (int i=0; i<n; i++){
        string a,b; cin>>a>>b;
        m1[b] = a;
    }
    for (int i=0; i<m; i++){
        string a,b; cin>>a>>b; b.pop_back();
        cout<<a<<" "<<b<<"; #"<<m1[b]<<"\n";
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