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
    ll n,m;
    cin>>n>>m;
    vector <ll> v(n, 0);
    set <ll> alive;
    for (int i=0; i<n; i++)alive.insert(i);
    for (int i=0; i<m; i++){
        int l,r,x;
        cin>>l>>r>>x;
        l--, r--, x--;
        vector <ll> toerase;
        auto it = alive.lower_bound(l);
        while (it!=alive.end()){
            if (*it > r)break;
            if ((*it) != x){
                toerase.push_back(*it); 
                v[*it] = x+1;
            }
            it++;
        }
        for (int j=0; j<toerase.size(); j++)alive.erase(toerase[j]);
        // for (auto d:v)cout<<d<<" "; cout<<"\n";
    }
    for (auto d:v)cout<<d<<" ";

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