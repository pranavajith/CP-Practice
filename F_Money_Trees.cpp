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
        ll ans = INT_MIN;
        ll a=0, b=0, curw=apple[0];
        for (;b<n;b++){
            if (height[b-1]%height[b]==0){
                while (curw + apple[b] <= k && height[b-1]%height[b]==0)b++;


                if (b==n-1){
                     ans = max(ans, b-a);
                }
            }
            else{
                ans = max(ans, b-a);
            }
        }
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