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

void solve(){
    ll n, sum1 = 0, ans = 0;
    string s;
    cin>>n>>s;
    map <ll,ll> m;
    for (int i=0; i<n; i++){
        sum1+=s[i]-'1';
        if (sum1==0)ans++;
        if (m[sum1] > 0)ans+=m[sum1]; m[sum1]++;
    }
    cout<<ans<<"\n";
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