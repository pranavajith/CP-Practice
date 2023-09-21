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
    ll n,w=1;
    cin>>n;
    ll count0=0;
    vector <ll> v;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        v.push_back(a);
        if (a==0)count0++;
        else w*=a;
    }
    if (count0==1)cout<<w<<"\n";
    else if (count0>1)cout<<0<<"\n";
    else{
    ll maxel = *min_element(v.begin(),v.end());     
    cout<<w/maxel*(maxel+1)<<"\n";
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