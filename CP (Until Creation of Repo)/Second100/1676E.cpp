#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n,q;
    cin>>n>>q;
    vector <ll> v(n);
    for (int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.rbegin(),v.rend());
    vector <ll> v2(n,0);
    v2[0]=v[0];
    for (int i=1;i<n;i++){
        v2[i]=v2[i-1]+v[i];
    }
    while (q--){
        ll w, prev;
        cin>>w;
        ll mid;
        ll left = 1, right = n, ans=-1;
        while (left<=right){
            mid = (left+right)/2;
            if (v2[mid-1] >= w){
                ans=mid;
                right=mid-1;
            }
            else {
                left = mid+1;
            }
        }
        cout<<ans<<"\n";
    }
    }


int main() 
{
    // lTxtIO;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}