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
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    if (b>=a){
        cout<<b<<"\n";
    }
    else if (d>=c) cout<<-1<<"\n";
    else{
        a-=b;
        ll w;
        if (a % (c-d) == 0) w = a/(c-d);
        else w = a/(c-d) + 1;
        cout<<b+w*c<<"\n";
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