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
    ll n,m,d;
    cin>>n>>m>>d;
    map <ll,ll> m1;

    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        m1[a]=i;
    }

    vector <ll> v;
    for (int i=0;i<m;i++){
        ll a;
        cin>>a;
        v.push_back(a);
    }

    for (int i=0;i<m-1;i++){
        if (m1[v[i+1]] < m1[v[i]]){
            cout<<
        }
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