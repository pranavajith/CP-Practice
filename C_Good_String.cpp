#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <algorithm>
#include <limits>
#include <iomanip>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

ll sol(string s, int x, int y){
    ll ans = 0;
    for (auto d:s){
        if (d-'0'==x){
            ans++; swap(x,y);
        }
    }
    if (x!=y && ans%2)ans--;
    return ans;
}


void solve(){
    string s;
    cin>>s;
    ll ans = 2;
    for (int i=0; i<10; i++)for (int j=0; j<10; j++)ans = max(ans, sol(s,i,j));
    cout<<s.size()-ans<<"\n";
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