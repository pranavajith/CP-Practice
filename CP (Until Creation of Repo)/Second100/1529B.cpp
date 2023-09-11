#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n, ans=0;
    cin>>n;
    bool flag=true;
    vector <ll> v;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        if (a<=0)ans++;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    ll inf = INT_MAX;
    for (int i=0;i<n;i++){
        if (v[i]>0){
            inf = min(v[i],inf);
        }
    }
    if (inf == INT_MAX)flag = false;
    for (int i=1;i<n;i++){
        if (v[i]<=0){
            flag = abs(v[i]-v[i-1]) >= inf;
            // cout<<abs(v[i]-v[i-1])<<"\n";
            if (flag==false)break;
        }
    }
    // cout<<"lol : "<<ans<<"\n";
    if (flag){
        cout<<ans+1<<"\n";
    }
    else{
        cout<<ans<<"\n";
    }
}

int main() 
{
    // lTxtIO;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}