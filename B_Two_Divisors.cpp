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

ll gcd(ll a, ll b){
    if (b==0) return a;
    return gcd(b, a%b);
}

ll lcm(ll a, ll b){
    return (a*b)/(gcd(a,b));
}

void solve(){
    vector <ll> v(2);
    cin>>v[0]>>v[1];
    sort(v.begin(), v.end());
    if (v[0] == 1) {
        cout<<v[1]*v[1]<<"\n";
    }
    else {
        ll a = lcm(v[0], v[1]);
        if (a==v[1]){
            ll b = v[1];
            for (int i=2; i*i <= b; i++) {
                if (b % i == 0){
                    b=i;
                    break;
                }
            }
            a *= b;
        }
        cout<<a<<"\n";
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