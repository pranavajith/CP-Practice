#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <algorithm>
#include <limits>
#include <iomanip>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

ll sum(ll n){
    ll ans = 0;
    while (n){
        ans+=n%10; n/=10;
    }
    return ans;
}

void solve(){
    ll n,s, ans=0;
    cin>>n>>s;
    if (sum(n) <= s){
        cout<<0<<"\n";
        return;
    }
    ll pw = 1;
    for (int i=0;i < 18; i++){
        int digit = (n/pw)%10;
        ll add = pw * ((10-digit)%10);
        n+=add; ans += add;
        if (sum(n)<=s){
            cout<<ans<<"\n";
            break;
        }
        pw*=10;
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