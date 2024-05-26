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
    string s; cin>>s;
    ll cntEv = 0;
    for (auto d:s){
        cntEv += ((d-'0') % 2 == 0);
    }
    if (cntEv == 0) cout<<-1<<"\n";
    else {
        if ((s[s.size()-1]-'0') % 2 == 0) cout<<0<<"\n";
        else if ((s[0]-'0') % 2 == 0) cout<<1<<"\n";
        else cout<<2<<"\n";
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