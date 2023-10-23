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
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    sort(s.begin(), s.end());
    if (s[0] != s[k-1]){
        cout<<s[k-1]<<"\n";
        return;
    }
    cout<<s[0];
    if (s[k] != s[n-1]){
        for (int i=k; i<n; i++)cout<<s[i]; cout<<"\n"; return;
    }
    else{
        for (int i=k; i<n; i+=k)cout<<s[n-1]; cout<<"\n";
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