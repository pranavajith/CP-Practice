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
    ll n,d;
    cin>>n>>d;
    // vector <ll> v(n);
    ll prev, cnt = 0;
    for (int i=0; i<n; i++) {
        ll a; cin>>a;
        if (i==0) prev = a;
        else {
            if (prev >= a){
                cnt += (prev-a)/d+1;
                a += ((prev-a)/d+1) * d;
            }
            // while (prev >= a) {
            //     cnt++;
            //     a += d;
            // }
            prev = a;
        }
    }
    cout<<cnt<<"\n";
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    // ll t; cin>>t; while(t--)
        solve();
    return 0;
}