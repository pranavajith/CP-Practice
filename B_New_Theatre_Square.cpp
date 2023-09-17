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

void solve(){
    ll n,m,x,y, ans = 0;
    cin>>n>>m>>x>>y;
    ll minmon = min(y,2*x);
    for (int i=0;i<n;i++){
        string s;
        cin>>s;
        for (int i = 0;i<m;i++){
            if (s[i]=='.'){
                if (i==m-1)ans+=x;
                else if (s[i+1]=='.'){
                    ans+=minmon;
                    s[i+1]='*';
                }
                else ans+=x;
            }
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