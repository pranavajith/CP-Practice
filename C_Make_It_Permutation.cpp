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
    ll n,c,d, duplisum = 0;
    cin>>n>>c>>d;
    vector <ll> v;
    map <ll,ll> m;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        if (m[a])duplisum+=d;
        else{
            m[a]++;
            v.push_back(a);
        }
    }
    sort(v.begin(),v.end());
    ll i = 1;
    n=v.size();
    while (i==v[i] && i!=n)i++;
    if (i==n)cout<<duplisum<<"\n";
    else{
        ll fin = n*d + c;
        ll pointer = 0;
        while (pointer!=n){
            ll temp;
            if (pointer == 0){
                temp = c*(v[pointer]-1)+(n-1)*d;
            }
            else{
                temp += (v[pointer]-v[pointer-1]-1)*c - d;
            }
            if (fin <= temp)break;
            fin = temp;
            pointer++;
        }
        cout<<fin<<"\n";
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