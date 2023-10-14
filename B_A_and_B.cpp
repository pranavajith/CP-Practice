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
    ll a,b;
    cin>>a>>b;
    ll w = abs(a-b);
    if (w==0)cout<<0<<"\n";
    else{
        ll s = 1;
        // cout<<w<<"!\n";
        while (s*(s+1)/2 < w)s++;
        // cout<<s<<"!!\n";
        // cout<<s*(s+1)/2 - w<<"!!!\n";
        if ((s*(s+1)/2 - w) % 2 == 0){
            cout<<s<<"\n";
        }
        else if (s%2)cout<<s+2<<"\n";
        else cout<<s+1<<"\n";
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