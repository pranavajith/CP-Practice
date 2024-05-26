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
    string str;cin>>str;
    ll n;cin>>n;
    vector<string> vec(n);
    for(ll i=0;i<n;++i) cin>>vec[i];
    for(ll i=0;i<n;++i){
    	for(ll j=0;j<n;++j){
    		if((vec[i][1]==str[0]&&vec[j][0]==str[1])||(vec[i][0]==str[1]&&vec[j][1]==str[0])||vec[j]==str) {
                cout<<"YES\n"; return;
            }
    	}
    }
    cout<<"NO\n";
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