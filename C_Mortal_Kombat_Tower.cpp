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
    ll n, ans = 0;
    cin>>n;
    vector <ll> v(n);
    for (int i=0; i<n; i++)cin>>v[i];
    if (v[0]==1)ans++;
    ll count1 = 0;
    for (int i=1;i<n;i++){
        if (v[i]==0){
            ans+=count1/3;
            count1=0;
        }
        else count1++;
    }
    ans+=count1/3;
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