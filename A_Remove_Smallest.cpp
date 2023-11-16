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
    ll n, a, max1 = -1;
    cin>>n;
    map <ll,ll> m;
    for (int i=0; i<n; i++){
        cin>>a;
        if (m[a]==0) m[a]++;
        max1 = max(max1, a);
    }
    if (m.size()==1){
        cout<<"YES\n";
        return;
    }
    // cout<<m[1]<<" "<<m[2]<<"\n";
    for (auto d:m){
        // cout<<d.first + 1<<"!! ";
        if (d.first != max1){
            if (m[d.first+1]==0){
                cout<<"NO\n";
                return;
            }
            m[d.first] = 0;
        }
    }
    ll sum1 = 0;
    for (auto d:m){
        sum1+=d.second;
        if (sum1>1){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
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