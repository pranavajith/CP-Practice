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
    ll n,l,r,x, sol=0;
    cin>>n>>l>>r>>x;
    vector <ll> v(n);
    for (int i=0;i<n;i++)cin>>v[i];
    for (int i=0;i<(1<<n);i++){
        ll minel = INT_MAX, maxel = INT_MIN, sum1=0, check = i;
        for (int j=0;j<n;j++){
            if ((i>>j)&1){
                minel = min(minel, v[j]);
                maxel = max(maxel, v[j]);
                sum1 += v[j];
            }
        }
        if (sum1>=l && sum1<=r && maxel - minel >= x){
            sol++;
        }
    }
    cout<<sol<<"\n";
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