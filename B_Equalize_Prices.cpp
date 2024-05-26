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
    vector <ll> v(n);
    for (int i=0; i<n; i++) cin>>v[i];

    ll maxel = *max_element(v.begin(), v.end()), minel = *min_element(v.begin(), v.end());
    if (maxel - minel > 2*k) cout<<-1<<"\n"; else cout<<minel + k<<"\n";


    // ll lowerInd = 0, upperInd = 0;
    // for (int i=0; i<n; i++) {
    //     if (i==0){
    //         lowerInd = max(0LL, v[i] - k); 
    //         upperInd = v[i] + k;
    //     }
    //     else {
    //         if (upperInd < v[i] - k || lowerInd > v[i] + k) {
    //             cout<<-1<<"\n";
    //             return;
    //         }
    //         if (upperInd < v[i] - k) {
    //             cout<<-1<<"\n";
    //             return;
    //         }
    //         lowerInd = max(lowerInd, v[i] - k);
    //         upperInd = min(upperInd, v[i] + k);
    //     }
    // }
    // cout<<upperInd<<"\n";
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