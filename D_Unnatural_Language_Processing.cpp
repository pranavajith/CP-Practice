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
    string s,ans;
    cin>>s;
    ll iter = 0;
    while (iter<n) {
        if (iter == n-3){
            ans+=s[iter];
            ans+=s[iter+1];
            ans+=s[iter+2];
            break;
        }
        if (iter==n-2){
            ans+=s[iter];
            ans+=s[iter+1];
            break;
        }
        if (s[iter+3] == 'a' || s[iter+3] == 'e') {
            ans+=s[iter];
            ans+=s[iter+1];
            ans+='.';
            iter+=2;
        }
        else {
            ans+=s[iter];
            ans+=s[iter+1];
            ans+=s[iter+2];
            ans+='.';
            iter+=3;
        }
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