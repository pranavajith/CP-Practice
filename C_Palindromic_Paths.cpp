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
    ll n,m;
    cin>>n>>m;
    vector < vector <ll> > v(n, vector <ll>(m, 0));
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++){
            cin>>v[i][j];
        }
    }
    vector <vector <ll> > count1(n+m-1, vector <ll> (2, 0));
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            count1[i+j][v[i][j]]++;
        }
    }
    // for (auto d:count1){
    //     for (auto d1 : d)cout<<d1<<" "; cout<<"\n";
    // }
    ll ans = 0;
    // cout<<"ok";
    for (int i=0; i<n+m-1; i++){
        // cout<<"ok";
        // cout<<ans<<" ";
        int j = n+m-2-i;
        if (i<=j)continue;
        // cout<<count1[i][0]<<"+"<<count1[j][0]<<" and "<<count1[i][1]<<"+"<<count1[j][1]<<"\n";
        ans += min(count1[i][0] + count1[j][0], count1[i][1] + count1[j][1]);
        

    }
    cout<<ans<<"\n";
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