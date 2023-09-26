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
    vector<ll> v;
    ll check;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        v.push_back(a);
        if (i==0)check=a;
        else check &=a;
    }
    if (check>0)cout<<1<<"\n";
    else if (v.size()==1 && v[0]==0)cout<<1<<"\n";
    else{
        ll count1=0;
        if (v[0]==0)count1++;
        ll check2=v[0];
        if (v[0]==0)check2=v[1];

        for (int i=1;i<n;i++){
            // if (check2==0)check2=v[i];
            // else{
                check2&=v[i];
                if (check2==0){
                    count1++;
                    if (i!=n-1)check2=v[i+1];
                }
            // }
        }
        cout<<count1<<"\n";
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