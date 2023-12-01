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
    ll n,m;
    cin>>n>>m;
    ll n2 = 0, n3 = 0, m2 = 0, m3 = 0;
    bool check = true;
    if (m%2!=0 && m%3!=0 && m!=n) check = false;
    while (n%2==0){
        n2++; n/=2;
    }
    while (n%3==0){
        n3++; n/=3;
    }
    while (m%2==0){
        m2++; m/=2;
    }
    while (m%3==0){
        m3++; m/=3;
    }
    // cout<<n2<<" "<<n3<<" "<<m2<<" "<<m3<<"\n";
    if (m2 < n2 || m3 < n3 || !check || m!=n) cout<<-1<<"\n";
    else cout<<m2-n2+m3-n3<<"\n";
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