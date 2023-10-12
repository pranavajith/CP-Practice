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
    ll n, ansindl = INT_MAX, ansindr = INT_MAX, curmin = INT_MAX;
    cin>>n;
    string s;
    cin>>s;
    s = 'l'+s;
    // map <ll,ll> x;
    map < pair<ll,ll> , ll > m;
    map < pair<ll,ll> , ll > check;
    pair <ll,ll> p; p.first = 0, p.second = 0;
    m[p]=0; check[p]=1;
    for (int i=1; i<=n; i++){
        if (s[i]=='L')p.first-=1;
        else if (s[i]=='R')p.first+=1;
        else if (s[i]=='U')p.second+=1;
        else if (s[i]=='D')p.second-=1;
        // cout<<i<<": "<<p.first<<" "<<p.second<<"\n";
        if (check[p]){
            // cout<<"yes!";
            if (curmin > (i - m[p])){
                // cout<<"yes!!!!! ";
                // cout<<i<<" "<<m[p]<<" ";
                ansindl = m[p];
                ansindr = i;
                curmin = (i - m[p]);
            }
        }
        check[p]=1;
        m[p]=i;
    }
    // for (auto d:m)cout<<d.first.first<<" "<<d.first.second<<" : "<<d.second<<"\n";
    if (ansindl==INT_MAX)cout<<-1<<"\n";
    else cout<<ansindl+1<<" "<<ansindr<<"\n";
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