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
    string s; ll n;
    cin>>n>>s;
    if (n%2){
        for (int i=0; i<n; i+=2){
            if ((s[i]-'0') % 2) {
                cout<<1<<"\n";
                return;
            }
        }
        cout<<2<<"\n";
    }
    else {
        for (int i=1; i<n; i+=2) {
            if ((s[i]-'0') % 2 == 0) {
                cout<<2<<"\n";
                return;
            }
        }
        cout<<1<<"\n";
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