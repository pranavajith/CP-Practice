#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <queue>
#include <stack>
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
    map <ll,ll> m;
    for (int i=0; i<n; i++){
        ll a;
        cin>>a;
        v.push_back(a);
        map <ll,ll> temp;
        for (int i=2; i*i<=a; i++){
            while (a%i==0){
                a/=i;
                temp[i]++;
            }
        }
        if (a!=1)temp[a]++;
        for (auto d:temp){
            if (m[d.first] < d.second) m[d.first] = d.second; 
        }
    }
    ll ans = 1;
    // for (auto d:m)cout<<d.first<<" "<<d.second<<"\n";
    ll lol = -1;
    for (auto d:m){
        if (lol==-1)lol=d.first;
        ll temp = d.first;
        for (int i=0; i<d.second-1; i++)temp*=d.first;
        // cout<<temp<<" !\n";
        ans*=temp;
    }

    if (count(v.begin(), v.end(), ans)){
        ans*=lol;
        m[lol]++;
    }
    
    ll check1 = 1;
    for (auto d:m){
        check1*=(d.second+1);
    }
    if (n == check1-2)cout<<ans<<"\n";
    else cout<<-1<<"\n";


    
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