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
    ll n,m,k;
    cin>>n>>m>>k;
    // int a;
    if (k>3){
        cout<<0<<"\n";
        return;
    }
    if (k==1) {
        cout<<1<<"\n";
        return;
    }
    // else if (k==2) {

    // }
    int a;
    if (m>=n) {
        a = n;
        a += m/n - 1;
    }
    else {
        a = m;
    }
    // cout<<a<<"! ";
    if (k==2) cout<<a<<"\n";
    else cout<<m-a<<"\n";
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