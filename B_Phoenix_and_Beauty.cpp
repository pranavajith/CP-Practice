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
    ll n, m, lol;
    bool check = true;
    cin>>n>>m;
    vector <ll> v(n);
    for (int i=0;i<n;i++)cin>>v[i];
    for (int i=0;i<=n-m;i++){
        if (i==0)lol = accumulate(v.begin(), v.begin()+m, 0LL);
        else{ 
            if (accumulate(v.begin()+i, v.begin()+i+m, 0LL) != lol){
            check = false;
            break;
            }
        }
    }
    if (check){
        cout<<n<<"\n";
        for (int i=0;i<n;i++)cout<<v[i]<<" ";cout<<"\n";
        return;
    }
    set <ll> s(v.begin(),v.end());
    if (s.size()>m){
        cout<<-1<<"\n";
        return;
    }
    cout<<n*s.size()<<"\n";
    for (int i=0;i<n;i++){
        for (auto d:s)cout<<d<<" ";
    }
    cout<<"\n";
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