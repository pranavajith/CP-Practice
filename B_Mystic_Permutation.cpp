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
    vector <ll> v(n);
    for (int i=0; i<n; i++) cin>>v[i];
    if (n==1){
        cout<<-1<<"\n";
        return;
    }
    vector <ll> v1(n+1, 0);
    vector <ll> ans(n-2);
    for (int i=0; i<n-2; i++){
        ll poss = 1;
        while (v1[poss] || v[i] == poss) poss++;
        ans[i] = poss;
        v1[poss] = 1;
    }
    int a=-1,b=-1;
    for (int i=1;i<=n;i++) if (!v1[i])
        {
            if (a==-1) a=i;
            else b=i;
        }
    for (auto d:ans) cout<<d<<" "; 
        if (a!=v[n-2] && b!=v[n-1]) cout<<a<<" "<<b<<"\n";
        else cout<<b<<" "<<a<<"\n";
    
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