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
    ll n,k;
    cin>>n>>k;

    vector <ll> apple(n);
    vector <ll> height(n);

    for (int i=0;i<n;i++)cin>>apple[i];
    for (int i=0;i<n;i++)cin>>height[i];

    if (*min_element(apple.begin(),apple.end())>k)cout<<0<<"\n";
    else{
        ll ans = 1, iter = 1, curnum = apple[0];
        for (int i=1;i<n;i++){
            if (height[i-1]%height[i]==0 && curnum+apple[i]<=k){
                iter++;
                curnum+=apple[i];
                if (i==n-1){
                    ans = max(ans, iter);
                }
            }
            else{
                ans = max(ans, iter);
                iter = 1;
                curnum = apple[i];
            }
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