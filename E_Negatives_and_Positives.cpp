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
    ll n;
    cin>>n;
    vector <ll> v(n); bool check = true; ll countneg = 0;
    ll fullsum = 0, minel = INT_MAX;
    for (int i=0; i<n; i++) {
        cin>>v[i];
        fullsum+=abs(v[i]);
        if (v[i]<0) countneg++;
        minel = min(minel, abs(v[i]));
    }
    if (countneg % 2 == 0) cout<<fullsum<<"\n";
    else{
        cout<<fullsum-2*minel<<"\n";
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