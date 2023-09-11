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
    ll n, a, countodd=0;
    cin>>n;
    bool flag1= true;
    vector <ll> v;
    for (int i=0;i<n;i++){
        cin>>a;
        if (a==1)flag1=false;
        if (a%2==1)countodd++;
        v.push_back(a);
    }
    if (flag1)cout<<"YES\n";
    else {
        sort (v.begin(),v.end());
        bool flag2=true;
        for (int i=0;i<n-1;i++){
            if (v[i]+1 == v[i+1]){
                flag2=false;
                break;
            }
        }
        if (flag2)cout<<"YES\n";
        else cout<<"NO\n";
    }
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