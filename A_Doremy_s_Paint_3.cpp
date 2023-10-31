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
ll mod = 1e9 + 7;
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n;
    cin>>n;
    vector <ll> v(n);
    map <ll,ll> m;
    for (int i=0; i<n; i++){
        ll a;
        cin>>a;
        v[i] = a;
        m[a]++;
    }
    if (n==2){
        cout<<"Yes\n";
        return;
    }
    else if (m.size()>2){
        cout<<"No\n";
        return;
    }
    else if (m.size()==1){
        cout<<"Yes\n";
        return;
    }
    else{
        for (auto d:m){
            if (d.second < n/2){
                cout<<"No\n";
                return;
            }
        }
        cout<<"Yes\n";
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