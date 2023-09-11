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
    ll n, count1=0;
    cin>>n;
    vector <ll> v;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        v.push_back(a);
        if (a==1)count1++;
    }
    if ((n==3 && v[1]%2==1))cout<<-1<<"\n";
    else if (*max_element(v.begin()+1, v.end()-1)==1)cout<<-1<<"\n";
    else{
        ll a=0;
        for (int i=1;i<n-1;i++){
            a+=(v[i]+1)/2;
        }
        cout<<a<<"\n";
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