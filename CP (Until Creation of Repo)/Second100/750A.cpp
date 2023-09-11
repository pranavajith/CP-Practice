#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <algorithm>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

ll sum5(ll a){
    return 5*a*(a+1)/2;
}

void solve(){   
    ll n,k;
    cin>>n>>k;
    ll k2 = 240-k;
    if (sum5(n)>=k2)cout<<n<<"\n";
    else if (k2==0)cout<<0<<"\n";
    else {
        ll left = 0, right = n;
        ll mid;
        while (left<right){
            mid = left + (right-left)/2;
            if (sum5(mid)==k2){
                break;
                // cout<<"hey!";
            }
            if (sum5(mid)>k2){
                right = mid-1;
            }
            else{
                left = mid + 1;
            }
        }
        cout<<mid<<"\n";
    }
}

int main() 
{
    // lTxtIO;
    // ll t;
    // cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}