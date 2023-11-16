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
    ll n;
    cin>>n;
    if (n==0) cout<<1<<"\n";
    else{
        if (n>4) {
            n--;
            n%=4;
            n++;
        }
        if (n==1) cout<<8<<"\n";
        if (n==2) cout<<4<<"\n";
        if (n==3) cout<<2<<"\n";
        if (n==4) cout<<6<<"\n";
        
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