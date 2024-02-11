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
    string s;
    cin>>s;
    reverse(s.begin(), s.end());
    vector <ll> v(10,0);
    ll ans = 0, iter = 0;
    for (auto d:s){
        v[d-'0']++;
        if (v[0]==2 || (v[0]==1 && d=='5') || (v[5] && d=='7') || (v[5] && d=='2')) {
            cout<<iter-1<<"\n";
            break;
        }
        iter++;
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