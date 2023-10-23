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

ll n,m;
vector <ll> v1, v2;

bool check(ll x){
    for (int i=0; i<n; i++){
        bool check = false;
        for (int j=0; j<m; j++){
            if (((v1[i] & v2[j])| x) == x){
                check = true;
            }
        }
        if (!check)return false;
    }
    return true;
}

void solve(){
    cin>>n>>m;
    for (int i=0; i<n; i++){
        ll a;
        cin>>a;
        v1.push_back(a);
    }
    for (int i=0; i<m; i++){
        ll a;
        cin>>a;
        v2.push_back(a);
    }
    for (int i=0; i<1e9; i++){
        if (check(i)){
            cout<<i<<"\n";
            return;
        }
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