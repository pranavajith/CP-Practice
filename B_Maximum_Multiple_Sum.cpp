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
      int n; cin>>n;
        vector<ll>v;
        v.push_back(0);
        v.push_back(0);
        ll x=2,sum,i;
        while(x<=n) {
            // cout<<"x "<<x<<endl;
            sum=0;
            i=1;
            while((i*x)<=n) {
                sum+=(i*x);
                //cout<<sum<<endl;
                i++;
            }
            v.push_back(sum);
            //cout<<v[x]<<endl;
            x++;
        }
       // for(auto i:v) cout<<i<<" ";
        // cout<<endl;
        ll maxi=0;
        ll ans;
        for(int i=0;i<v.size();i++) {
            if(v[i]>maxi) {
                ans=i;
                maxi=v[i];
            }
        }
        cout<<ans<<endl;
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