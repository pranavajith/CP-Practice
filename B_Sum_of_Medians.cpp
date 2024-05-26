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
    int n,k;
       cin>>n>>k;
       vector<ll> a;
       for(int i=0;i<n*k;i++){
            ll e;
            cin>>e;
            a.push_back(e);
       }
       int i=n*k-1;
       float m=n;
       ll count=0;
       int p=n-ceil(m/2)+1;
       while(i!=n*k-1-k*p){
            count+=a[i-p+1];
            i-=p;
            
       }
       cout<<count<<endl;
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