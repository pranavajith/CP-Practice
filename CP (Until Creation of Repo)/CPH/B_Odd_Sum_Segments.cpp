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
    ll n,k, countodd=0;
    cin>>n>>k;
    vector <ll> v;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        v.push_back(a);
        if (a%2)countodd++;
    }
    if ((countodd%2)!=(k%2) || countodd < k)cout<<"NO\n";
    else{
        k--;
        cout<<"YES\n";
        for (int i=0;i<n;i++){
            if (k==0)break;
            if (v[i]%2 && k){
                k--;
                cout<<i+1<<" ";
            }
        }
        cout<<n<<"\n";
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