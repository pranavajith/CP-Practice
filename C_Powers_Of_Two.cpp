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
    ll n,k;
    cin>>n>>k;
    if (k>n) cout<<"NO\n";
    else{
        
        ll count1 = 0;
        vector <ll> v;
        for (int i=32; i>=0; i--){
            if ((n>>i) & 1){
                if (i==0) count1++;
                else v.push_back(1<<i);
            }
        }
        // cout<<"ok";
        // for (auto d:v) cout<<d<<" ";
        ll a,b,c, w = v.size()+count1;
        if (k < w) {
            cout<<"NO\n"; return;
        }
        cout<<"YES\n";
        // cout<<"ok";

        // for (auto d:v) cout<<d<<" ";

        while (w!=k){
            // cout<<"ok";
            a = v.back(); v.pop_back();
            b = a/2;
            w++;
            if (a==2)count1+=2;
            else {
                v.push_back(b);
                v.push_back(b);
            }
        }
        for (int i=0; i<count1; i++) cout<<1<<" ";
        for (int i=0; i<v.size(); i++) cout<<v[i]<<" ";
        cout<<"\n";
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