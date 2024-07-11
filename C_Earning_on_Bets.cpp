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

ll gcd(ll a, ll b){
    if (b==0) return a;
    return gcd(b, a%b);
}

void solve(){
     int n;
    cin>>n;
    vector<int> v(n);
 
    for (int i=0; i<n; i++) cin>>v[i];
    int x = 1;
 
    for(auto &val:v){
        int y = gcd(x,val);
        y = val/y;
        x*=y;
    }
    int sum = 0;
    vector<int> ans;
    for(auto &val:v){
        sum+=x/val;
        ans.push_back(x/val);
    }
    if(sum>=x) cout<<-1<<endl;
    else{
        for(auto &val:ans){
            cout<<val<<" ";
        }
        cout<<endl;
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