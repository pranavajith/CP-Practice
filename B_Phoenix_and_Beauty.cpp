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
    ll n, m, lol;
    bool check = true;
    cin>>n>>m;
    set <ll> s;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        s.insert(a);
    }
    if (s.size()>m)cout<<-1;
    else{
        
        vector <ll> v(s.begin(),s.end());
        cout<<m*n<<"\n";
        while (v.size()<m)v.push_back(1);
        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                cout<<v[j]<<" ";
            }
        }
    }
    cout<<"\n";
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