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
    vector <ll> v;
    while (n--) {
        ll a,b;
        // v.push_back()
        cin>>a>>b;
        v.push_back(a);
        if (a!=b){
            cout<<"rated\n";
            return;
        }
    }
    reverse(v.begin(), v.end());
    if (is_sorted(v.begin(), v.end())) {
        cout<<"maybe\n";
    }
    else cout<<"unrated\n";
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