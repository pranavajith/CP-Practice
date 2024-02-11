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
    ll xor1, sum1;
    cin>>xor1>>sum1;
    if (xor1 == 0 && sum1 == 0){
        cout<<0<<"\n";
    }
    else if (xor1 == sum1) {
        cout<<1<<"\n"<<xor1<<"\n";
    }
    else if (xor1 > sum1 || xor1 % 2 != sum1 % 2) cout<<-1<<"\n";
    else {
        ll x = (sum1 - xor1)/2;
        // bool check = 0;
        if ((xor1 & x) == 0) cout<<2<<"\n"<<xor1+x<<" "<<x<<"\n";
        else cout<<3<<"\n"<<xor1<<" "<<x<<" "<<x<<"\n";
    }
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