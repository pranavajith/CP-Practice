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
    ll n; cin>>n;
    // string s; cin>>s;
    ll cnt1 = 0, cnt0 = 0;
    for (int i=0; i<n; i++){
        char c; cin>>c;
        if (c == 'z') cnt0++;
        else if (c == 'n') cnt1++;
    }
    if (cnt1 == 0 && cnt0 == 0) {
        cout<<"0\n";
        return;
    }
    while (cnt1--) cout<<"1 ";
    while (cnt0--) cout<<"0 ";
    cout<<"\n";

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