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
    ll n;
    cin>>n;
    vector <ll> v(n-1);
    for (int i=0;i<n-1;i++){
        cin>>v[i];
    }
    if (n==3 && count(v.begin(),v.end(),2)!=0 && count(v.begin(),v.end(),1)!=0){
        cout<<"NO\n";
        return;
    }
    if (n==2 && (v[0]!=1 && v[0]!=2 && v[0]!=3)){
        cout<<"NO\n";
        return;
    }
    vector <ll> v1;
    for (int i=n-2;i>0;i--){
        v1.push_back(v[i]-v[i-1]);
    }
    // for (auto d:v1)cout<<d<<" ";cout<<"\n";
    // if (v1.size()!=n-2)
    vector <ll> v3(n+1,0);
    v3[0]=1;
    ll ans1 = INT_MAX;
    for (int i=0;i<v1.size();i++){
        if ((v1[i])>n){
            ans1 = v1[i];
            // return;
        }
        else v3[v1[i]]+=1;
    }
    if (ans1==INT_MAX){
        for (int i=0;i<v3.size();i++){
            if (v3[i]>1){
                ans1=i;
                
                break;
            }
        }
    }
    if (ans1!=INT_MAX){
        ll a=-1,b=-1,c=-1;
        for (int i=1;i<v3.size();i++){
            if (v3[i]!=1 && a==-1)a=i;
            else if (v3[i]!=1 && b==-1)b=i;
            else if (v3[i]!=1 && c==-1)c=i;
        }
        if ((a+b)==ans1 || (b+c)==ans1 || (c+a)==ans1)cout<<"YES\n";
        else cout<<"NO\n";
    }
    else{
        for (auto d:v3)cout<<d<<" ";
        if (count(v3.begin(),v3.end(),0)==2)cout<<"YES\n";
        else cout<<"NO\n";
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