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

ll gcd(ll a, ll b){
    if (b==0)return a;
    return gcd(b, a%b);
}

void solve(){
    ll n, curgcd, a=1,b=0;
    cin>>n;
    vector <ll> v, ans;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.rbegin(),v.rend());
    ans.push_back(v[0]);
    curgcd = v[0];
    v[0]=-1;
    while (curgcd != 1){
        for (int i=1;i<n;i++){
            if (v[i]!=-1){
                if (gcd(curgcd,v[i])>gcd(a,curgcd)){
                    a=v[i];
                    b=i;
                }
            }
        }
        if (gcd(a, curgcd)==1)break;
        ans.push_back(a);
        v[b]=-1;
        curgcd = gcd(a, curgcd);
        a=1;b=0;
    }
    for (int i=0;i<n;i++){
        if (v[i]!=-1)ans.push_back(v[i]);
    }
    for (int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
}

int main() 
{
    // TxtIO;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}