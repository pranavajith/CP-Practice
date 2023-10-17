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
    ll n;
    cin>>n;
    vector <ll> v(n+1);
    for (int i=1; i<=n; i++)cin>>v[i];
    // for (auto d:v)cout<<d;
    ll sum1 = v[1], minodd = v[1], mineven = INT_MAX, o=1, e = 0, ans = 1e18;
    for (int i=2; i<=n; i++){
        if (i%2==1){    
            minodd = min(minodd, v[i]);
            o++;
        }
        else{
            mineven = min(mineven, v[i]);
            e++;
        }
        sum1+=v[i];
        ans = min(ans, sum1 + (n-o)*minodd + (n-e)*mineven);
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