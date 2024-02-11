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
    ll countodd = 0;
    map <ll, bool> m;
    vector <ll> oddind;
    for (int i=0; i<n; i++) {
        cin>>v[i];
        countodd += v[i] % 2;
        if (v[i] % 2) {
            oddind.push_back(i);
            m[i] = true;
        }
    }
    if (countodd == 0 || (countodd == 2 && n == 3)) cout<<"NO\n";
    else {
        cout<<"YES\n";
        if (countodd >= 3) {
            cout<<oddind[0]+1<<" "<<oddind[1]+1<<" "<<oddind[2]+1<<"\n";
        }
        else {
            ll i = 0;
            while (m[i]) i++;
            ll j = i+1;
            while (m[j]) j++;
            cout<<oddind[0]+1<<" "<<i+1<<" "<<j+1<<"\n";
        }
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