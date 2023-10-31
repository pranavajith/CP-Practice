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
    deque <ll> q;
    vector <ll> v(n); for (int i=0; i<n; i++) cin>>v[i]; sort(v.begin(), v.end());
    for (int i=0; i<n; i++) q.push_back(v[i]);
    ll x = 0, ans = 0;
    while (q.size()){
        // for (auto d:q)cout<<d<<" "; cout<<"\n";
        // cout<<ans<<"\n";
        if (q.size()==1){
            if (x>=q[0]){
                ans++;
                break;
            }
            else{
                if (q[0]==1){
                    ans++;
                    break;
                }
                ll temp = q[0]-x;
                ans+=(temp+1)/2 + 1;
                break;
            }
        }
        if (q.front() + x <= q.back()){
            x+=q.front();
            ans+=q.front();
            q.pop_front();
        }
        else{
            q[0] -= (q.back() - x);
            ans+=(q.back() - x);
            x=0;
            q.pop_back();
            ans++;
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