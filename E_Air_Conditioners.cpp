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
    // char c;
    // cin>>c;
    ll n,k;
    cin>>n>>k;
    
    vector <ll> vsum (n, INT_MAX);
    vector <ll> pos(k), temp(k);
    for (int i=0; i<k; i++)cin>>pos[i];
    // cout<<"ok";
    for (int i=0; i<k; i++)cin>>temp[i];
    // cout<<"ok "<<pos.size()<<" "<<temp.size()<<"\n";
    for (int i=0; i<k; i++)vsum[pos[i]-1]=temp[i];
    // cout<<"ok "<<pos.size()<<" "<<temp.size()<<"\n";
    // for (auto d:vsum)cout<<d<<" ";
    vector <ll> left (n, INT_MAX), right (n, INT_MAX);
    for (int i=0; i<n; i++){
        if (i==0)left[i]=vsum[i];
        else{
            left[i]=min(left[i-1]+1, vsum[i]);
        }
    }
    // cout<<"ok "<<pos.size()<<" "<<temp.size()<<"\n";
    for (int i=n-1; i>=0; i--){
        if (i==n-1)right[i]=vsum[i];
        else{
            right[i]=min(right[i+1]+1, vsum[i]);
        }
    }
    for (int i=0; i<n; i++)cout<<min(left[i], right[i])<<" ";cout<<"\n";
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