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
    ll n,w, max_count = 0;
    cin>>n;
    ll count1=1;
    // cin>>a;
    for (int i=0;i<=n;i++){
        // ll a;
        if (i==0)cin>>w;
        else{
            ll b;
            if (i!=n)cin>>b;
            else b=INT_MIN;
            if (b>w)count1++;
            else{
                max_count=max(max_count,count1);
                count1=1;
            }
            w=b;
        }
    }
    cout<<max_count<<"\n";
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