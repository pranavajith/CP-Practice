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
    ll a,b; cin>>a>>b;
    ll w = max(a,b);
    if (w==6) cout<<"1/6\n";
    else if (w==5) cout<<"1/3\n";
    else if (w==4) cout<<"1/2\n";
    else if (w==3) cout<<"2/3\n";
    else if (w==2) cout<<"5/6\n";
    else  cout<<"1/1\n";
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