#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <algorithm>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

ll check(vector <ll> v){
    ll sum1=0;
    for (int i=0;i<v.size();i++){
        if (i%2==0){
            sum1+=v[i];
        }
        else{
            sum1-=v[i];
        }
    }
    return sum1;
}

void solve(){
    ll n, count1=0, count0=0, ind1=0;
    cin>>n;
    vector <ll> v;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        if (a==1)count1++;
        if (a==0)count0++;
        v.push_back(a);
    }
    if (count1<=n/2){
        cout<<count0<<"\n";
        for (int i=0;i<count0;i++){
            cout<<0<<" ";
        }
        cout<<"\n";
    }
    else{
        if (count1%2==1)count1--;
        cout<<count1<<"\n";
        for (int i=0;i<count1;i++){
            cout<<1<<" ";
        }
        cout<<"\n";
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