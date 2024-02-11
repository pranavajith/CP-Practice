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
    ll n,k;
    cin>>n>>k;
    if (k> (n-1)/2) {
        cout<<-1<<"\n";
        return;
    }
    cout<<1<<" ";
    if (n%2){
    for (int i=2; i<=n; i+=2){
        if (k){
            k--;
            cout<<i+1<<" "<<i<<" ";
        }
        else cout<<i<<" "<<i+1<<" ";
    }
    }
    else {
    for (int i=2; i<=n; i+=2){
        if (k){
            k--;
            cout<<i+1<<" "<<i<<" ";
        }
        else {
            if (i==n) cout<<i<<" ";
            else cout<<i<<" "<<i+1<<" ";
        }
    }
    }
    cout<<"\n";
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