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
    ll n, a; cin>>n;
    pair <ll,ll> p;
    vector <pair <ll,ll> > odd, even;
    for (int i=0; i<2*n; i++){
        cin>>a;
        p.first = a;
        p.second = i;
        if (a%2) odd.push_back(p);
        else even.push_back(p);
    }
    if (odd.size() % 2){
        odd.pop_back(); even.pop_back();
    }
    else{
        if (odd.size()>1){
            odd.pop_back(); odd.pop_back();
        }
        else{
            even.pop_back(); even.pop_back();
        }
    }
    while (odd.size()){
        cout<<odd.back().second+1<<" "; odd.pop_back();
        cout<<odd.back().second+1<<"\n"; odd.pop_back();
    }
    while (even.size()){
        cout<<even.back().second+1<<" "; even.pop_back();
        cout<<even.back().second+1<<"\n"; even.pop_back();
    }
    // cout<<"!\n";
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