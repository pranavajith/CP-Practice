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
    ll n;
    cin>>n;
    if (n==1) {
        ll a; 
        cin>>a;
        cout<<"YES\n1\n";
    }
    else{
        vector <ll> ans;
        ll x = (1<<30)-1;
        vector < vector <ll> > v;
        for (int i=0; i<n; i++){
            vector <ll> temp(n);
            for (int j=0; j<n; j++) cin>>temp[j];
            v.push_back(temp);
        }
        // ll w;
        for (int i=0; i<n; i++){
            ll w=x;
            for (int j=0; j<n; j++){
                if (i!=j){
                    w&=v[i][j];
                }
            }
            // cout<<w<<" ";
            ans.push_back(w);
        }
       for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (i!=j && (ans[i] | ans[j]) != v[i][j]){
                cout<<"NO\n";
                return;
            }
        }
       }
       cout<<"YES\n";
       for (int i=0; i<n; i++) cout<<ans[i]<<" "; cout<<"\n";
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