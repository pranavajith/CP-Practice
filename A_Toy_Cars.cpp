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
    vector <ll> ans;
    for (int i=0; i<n; i++){
        bool check = true;
        for (int j=0; j<n; j++){
            ll a; cin>>a;
            if (a==1 || a==3) check = false;
        }
        if (check){
            ans.push_back(i+1);
        }
    }
    cout<<ans.size()<<"\n"; for (auto d:ans) cout<<d<<" ";
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