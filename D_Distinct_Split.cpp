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
    ll n; cin>>n;
    string s;
    cin>>s;
    vector <ll> left(n,0), right(n,0);
    vector <ll> leftcheck(27,0), rightcheck(27,0);
    for (int i=0; i<n; i++){
        if (i==0){
            leftcheck[s[i]-'a'] = 1;
            left[i] = 1;
        }
        else {
            if (!leftcheck[s[i]-'a']){
                leftcheck[s[i]-'a'] = 1;
                left[i] = left[i-1] + 1;
            }
            else left[i] = left[i-1];
        }
    }
    for (int i=n-1; i>=0; i--) {
        if (i==n-1){
            rightcheck[s[i]-'a'] = 1;
            right[i] = 1;
        }
        else {
            if (!rightcheck[s[i]-'a']){
                rightcheck[s[i]-'a'] = 1;
                right[i] = right[i+1] + 1;
            }
            else {
                right[i] = right[i+1];
            }
        }
    }
    ll ans = 0;
    // right.push_back(0);
    for (int i=1; i<n; i++) {
        ans = max(ans, left[i-1] + right[i]);
    }
    cout<<ans<<"\n";
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