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
    ll n,m,a;
    cin>>n>>m;
    double totsum = 0; ll maxben = -1, minben = INT_MAX;
    for (int i=0; i<n; i++){
        cin>>a;
        totsum+=a;
        maxben = max(maxben, a);
        minben = min(minben, a);
    }
    cout<<max(maxben , (long long)ceil((totsum+m)/n))<<" "<<maxben+m<<"\n";
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