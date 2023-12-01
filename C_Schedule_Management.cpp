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
    double m; ll n,a;
    cin>>n>>m;
    // set <ll> s;
    vector <ll> v(n);
    for (int i=0; i<m; i++) cin>>v[i];
    ll count1 = 0, t = 0;
    while (count1!=m){
        t+=2;
        vector <ll> temp(n+1, 0);
        // first iteration
        for (int i=0; i<v.size(); i++){
            if (temp[v[i]]<2){
                temp[v[i]]++;
                v[i] = -1;
                count1++;
            }
        }

        if (count1==m) {
            t--; break;
        }
        // second iteration
        for (int i=0; )

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