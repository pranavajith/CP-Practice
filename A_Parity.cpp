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
    ll b,k; cin>>b>>k;
    // if (b%2)
    // vector <ll> v()
    ll cnt = 0, temp = 0;
    while (k--) {
        cin>>temp; if (temp%2) cnt++;
    }
    if (b%2==0){
        if (temp%2) cout<<"odd\n";
        else cout<<"even\n";
    }
    else{
        if (cnt%2) cout<<"odd\n";
        else cout<<"even\n";
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