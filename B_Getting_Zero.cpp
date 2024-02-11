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
ll mod = 32768;
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

ll find (ll n){
    ll check = 0;
    if (n%2){
        check++;
        n++;
    }
    ll a1 = n, count2 = 0;
    while (a1 % 2 == 0) {
        count2++;
        a1/=2;
    }
    return 15 - count2 + check;
}

void solve(){
    ll n,a,ans=0;
    cin>>n;
    for (int i=0; i<n; i++){
        cin>>a;
        if (a==0){
            cout<<0<<"\n";
            continue;
        }
        ans = find(a); 
        for (int i=1; i<=ans; i++){
            ans = min(ans, find(a+i) + i);
        }
        cout<<ans<<" ";
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