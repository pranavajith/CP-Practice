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
    ll n, a;
    cin>>n;
    vector <ll> v(n); 
    for (int i=0; i<n; i++) cin>>v[i];
    if (count(v.begin(), v.end(), v[0]) == n) cout<<"NO\n";
    else{
        cout<<"YES\n";
        ll a = -1;
        for (int i=1; i<n; i++){
            if (a==-1 && v[i]!=v[0]){
                a=i; break;
            }
        }
        for (int i=1; i<n; i++){
            if (v[i]==v[0]){
                cout<<a+1<<" "<<i+1<<"\n";
            }
            else cout<<1<<" "<<i+1<<"\n";
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