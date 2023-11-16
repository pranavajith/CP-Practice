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
    ll n, ans = 0; cin>>n;
    vector <ll> v(n); for (int i=0; i<n; i++) cin>>v[i];
    if (count(v.begin(), v.end(), -1) == n){
        cout<<1<<"\n";
        return;
    }
    vector < map <ll,bool> > m;
    for (int i=0; i<n; i++){
        if (v[i] != -1){
            bool check = false;
            for (auto d:m){
                if (!d[v[i]]){
                    d[v[i]] = true;
                    check = true;
                    break;
                }
            }
            if (!check){
                ans++;
                map <ll, bool> m1; m1[v[i]] = true;
                m.push_back(m1);
            }
        }
    }
    cout<<ans<<"\n";

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