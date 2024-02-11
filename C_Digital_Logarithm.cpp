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
    ll n,a;
    cin>>n;
    multiset <ll> s1, s2;
    for (int i=0; i<n; i++) {
        cin>>a; 
        s1.insert(a);
    }
    for (int i=0; i<n; i++) {
        cin>>a; 
        s2.insert(a);
    }
    ll ans = 0;
    while (s1.size() > 0 && s2.size() > 0) {
        auto it1 = s1.end(); it1--; ll end1 = *it1; s1.erase(it1);
        auto it2 = s2.end(); it2--; ll end2 = *it2; s2.erase(it2);
        if (end1 != end2){
            ans++;
            if (end1 > end2) {
                s2.insert(end2);
                s1.insert(floor(log10(end1)+1));
            }
            else {
                s1.insert(end1);
                s2.insert(floor(log10(end2)+1));
            }
        }
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