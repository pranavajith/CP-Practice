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
    string s;
    cin>>n>>s;
    bool check1 = false, check2 = false;
    for (int i=0; i<n/2; i++){
        if (s[i]!=s[n-i-1]) {
            if (!check1) check1 = true;
            else {
                if (check2) {
                    // cout<<i<<" ";
                    cout<<"No\n";
                    return;
                }
            }
        }
        else {
            if (check1) check2 = true;
        }
    }
    cout<<"Yes\n";
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