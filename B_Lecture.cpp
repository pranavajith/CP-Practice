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
     string s1, s2;
     map <string,string> m1;
     for (int i=0; i<m;i++){
        cin>>s1>>s2;
        if (s1.size()>s2.size()) m1[s1] = s2;
        else m1[s1] = s1;
     }
    for (int i=0; i<n; i++){
        cin>>s1; cout<<m1[s1]<<" ";
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