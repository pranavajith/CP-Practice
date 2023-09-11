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

void solve(){
    ll n;
    cin>>n;
    vector <ll> v1;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        v1.push_back(a);
    }
    vector <ll> v2(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    ll gap = INT_MAX, a,b, indbig, indsmall;
    for (int i=0;i<n-1;i++){
        if (abs(v2[i+1]-v2[i]) < gap){
            gap = abs(v2[i+1]-v2[i]);
            a=min(v2[i+1],v2[i]);
            b=max(v2[i+1],v2[i]);
            indbig = i+1;
            indsmall = i;
        }
    }
    // cout<<"! "<<indbig<<" "<<indsmall<<"\n";
    // bool flaga=true, flagb=true;
    // vector <ll> v(n);
    // v[0]=a;v[n-1]=b;
    cout<<a<<" ";
    for (int i=indbig+1;i<n;i++){
        // if (flaga && v2[i]==a)flaga=false;
        // else if (flagb && v2[i]==b)flagb=false;
        cout<<v2[i]<<" ";
    }
    for (int i=0;i<indsmall;i++){
        // if (flaga && v2[i]==a)flaga=false;
        // else if (flagb && v2[i]==b)flagb=false;
        cout<<v2[i]<<" ";
    }
    cout<<b<<"\n";
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