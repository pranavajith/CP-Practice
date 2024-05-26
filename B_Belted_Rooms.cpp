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
    string s;
    cin>>s;
    if ((count(s.begin(), s.end(), '>') + count(s.begin(), s.end(), '-') == n) || (count(s.begin(), s.end(), '<') + count(s.begin(), s.end(), '-') == n)) cout<<n<<"\n";
    else {
        vector <ll> v(n, 0);
        for (int i=0; i<n; i++){
        if (s[i] == '-') {
            v[i]=1; v[(i+1)%n] = 1;
        }
    }
    // for (auto d:v) cout<<d<<" "; cout<<'\n';
    cout<<count(v.begin(), v.end(), 1)<<"\n";}
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