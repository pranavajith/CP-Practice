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

ll pyramid_num(ll n){
    return (3*n*n + n)/2;
}

void solve(){
    ll n, sol = 0;
    cin>>n;
    while (n>=2){
        ll a = 0, b = INT_MAX;
        while (a<=b){
            ll mid = (a+b)/2;
            if (pyramid_num(mid)>n)b=mid-1;
            else a = mid+1;
        }
        a--;
        sol++;
        n-=pyramid_num(a);
        // n=0;
    }
    cout<<sol<<"\n";
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