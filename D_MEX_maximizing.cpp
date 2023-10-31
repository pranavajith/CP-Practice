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
    ll n,x,a;
    cin>>n>>x;
    set <pair<ll,ll> > p;
    vector <ll> mod(x, 0);
    for (int i=0; i<x; i++){
        p.insert(make_pair(mod[i],i));
    }
    while (n--){
        cin>>a;
        a%=x;
        p.erase(make_pair(mod[a], a));
        mod[a]++;
        p.insert(make_pair(mod[a],a));
        cout<<(*(p.begin())).first * x + (*(p.begin())).second<<"\n";
    }
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