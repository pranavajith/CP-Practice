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
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n, p, c, w;
    cin>>n>>p;
    vector <ll> v;
    for (int i=0; i<n; i++){
        cin>>c;
        bool check = false;
        for (int j=0; j<c; j++){
            cin>>w;
            if (w<p)check = true;
        }
        if (check)v.push_back(i+1);
    }   
    cout<<v.size()<<"\n";
    for (int i=0; i<v.size(); i++)cout<<v[i]<<" ";
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