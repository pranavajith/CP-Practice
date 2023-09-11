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
    ll a,k;
    cin>>a>>k;
    k--;
    while (k--){
        ll leng = floor(log10(a)+1), a_sus=a, min1 = INT_MAX, max1=-1;
        // vector <ll> v;
        for (int i=0;i<leng;i++){
            // v.push_back(a_sus%10);
            // cout<<a_sus%10<<" ";
            ll x = a_sus%10;
            if (x>max1)max1=max(max1,x);
            if (x<min1)min1=min(min1,x);
            a_sus/=10;
        }
        // sort(v.begin(),v.end());
        if (max1*min1==0)break;
        a += max1*min1;
    }
    cout<<a<<"\n";
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