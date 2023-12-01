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
    double n,a; double avg = 0;
    cin>>n;
    map <double, ll> m;
    for (int i=0; i<n; i++){
        cin>>a;
        m[a]++;
        avg+=a;
    }
    avg/=n;
    // if ((int)avg != avg) {
    //     cout<<0<<"\n";
    //     return;
    // }
    ll ans = 0;
    // cout<<avg<<"\n";
    for (auto d:m){
        double w = 2*avg - d.first;
        // cout<<w<<" ";
        if (w==d.first){
            ans+=d.second * (d.second-1);
        }
        else{
            ans+=d.second * m[w];
        }
    }
    cout<<ans/2<<"\n";
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