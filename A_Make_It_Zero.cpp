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
    vector <ll> v;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        v.push_back(a);
    }
    if (n%2==0){
        cout<<2<<"\n"<<1<<" "<<n<<"\n"<<1<<" "<<n<<"\n";
    }
    else{
        cout<<4<<"\n"<<1<<" "<<n-1<<"\n"<<1<<" "<<n-1<<"\n"<<n-1<<" "<<n<<"\n"<<n-1<<" "<<n<<"\n";
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