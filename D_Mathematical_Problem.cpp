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
    if (n==1){
        cout<<1<<"\n";
        return;
    }
    vector <string> ans;
    ll t = (n-3)/2;
    while (t != -1) {
        ll rem = n;
        string s1, s2;
        s1 += '1'; s2 += '9'; rem--;
        ll x = t; 
        while (x--) {
            s1 += '0'; s2 += '0'; rem--;
        }
        s1 += '6'; s2 += '6'; rem--;
        x = t;
        while (x--) {
            s1 += '0'; s2 += '0'; rem--;
        }
        s1 += '9'; s2 += '1'; rem--;
        while (rem--){
            s1 += '0'; s2 += '0';
        }
        ans.push_back(s1);
        ans.push_back(s2);
        t--;
    }
    string s3;
    s3 = "196";
    for (int i=0; i<n-3; i++) s3 += '0';
    ans.push_back(s3);
    for (auto d:ans) cout<<d<<"\n";
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