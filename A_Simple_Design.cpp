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
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

ll sumofdig(ll n){
    ll ans = 0;
    // for (int i=0; i<floor(log10(n)+1); i++){
    //     ans+=n%10;
    //     n/=10;
    // }
    string s = to_string(n);
    for (int i=0; i<s.size(); i++){
        ans+=s[i]-'0';
    }
    return ans;
}

void solve(){
    ll n,m;
    cin>>n>>m;
    while (true){
        // cout<<sumofdig(n)<<" !\n";
        if (sumofdig(n) % m == 0){
            cout<<n<<"\n";
            return;
        }
        n++;
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