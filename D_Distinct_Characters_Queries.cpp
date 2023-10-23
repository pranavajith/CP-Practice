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

void solve(){
    string s; ll q;
    cin>>s>>q;
    ll n = s.size();
    vector < set <ll> > v(26);
    for (int i=0; i<n; i++){
        v[s[i]-'a'].insert(i);
    }
    while (q--){
        int w;
        cin>>w;
        if (w==1){
            char c; ll pos;
            cin>>pos>>c;
            pos--;
            v[s[pos]-'a'].erase(pos);
            s[pos] = c;
            v[s[pos]-'a'].insert(pos);
        }
        else{
            ll l,r, cnt = 0;
            cin>>l>>r;
            l--; r--;
            for (int i=0; i<26; i++){
                auto it = v[i].lower_bound(l);
                if (it!=v[i].end() && *it <= r)cnt++;
            }
            cout<<cnt<<"\n";
        }
    }
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