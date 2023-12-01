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
    string l,r;
    cin>>l>>r;
    reverse(l.begin(), l.end());
    ll siz = l.size();
    for (int i=0; i<r.size()-siz; i++){
        l.push_back('0');
    }
    reverse(l.begin(), l.end());
    ll a = -1;
    for (int i=0; i<r.size(); i++){
        if (l[i]!=r[i]){
            a=i; break;
        }
    }  
    if (a==-1){
        cout<<0<<"\n";
        return;
    }
    if (a==r.size()-1){
        cout<<stoll(r)-stoll(l)<<"\n";
    }
    else{
        ll ans = 0;
        // cout<<a<<" ";
        for (int i=0; i<r.size(); i++){
            if (i<=a) ans+=(r[i])-(l[i]);
            else ans+=9;
        }
        cout<<ans<<"\n";
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