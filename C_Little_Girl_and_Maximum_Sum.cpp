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
    ll n, q;
    cin>>n>>q;
    vector <ll> v(n);
    for (int i=0;i<n;i++)cin>>v[i];
    sort(v.rbegin(),v.rend());
    vector <ll> vn(n,0);
    for (int i=0;i<q;i++){
        ll l,r;
        cin>>l>>r;
        vn[l-1]++;
        // cout<<r+1;
        // cout<<"lol "<<r+1<<" !\n";
        if (r<n){
            // cout<<"yay!";
            vn[r]--;
            // cout<<r+1<<" "<<vn[r+1]<<"\n";
        }
        // vn[r--];
    }
    // for (auto d:vn)cout<<d<<" !";cout<<"\n";
    for (int i=1;i<n;i++){
        vn[i]+=vn[i-1];
    }
    // for (auto d:vn)cout<<d<<" !";cout<<"\n";
    sort(vn.rbegin(), vn.rend());
    // for (auto d:vn)cout<<d<<" !";cout<<"\n";
    ll sol = 0;
    for (int i=0;i<n;i++){
        sol+=vn[i]*v[i];
    }
    cout<<sol<<"\n";
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    // ll t; cin>>t; while(t--)
        solve();
    return 0;
}