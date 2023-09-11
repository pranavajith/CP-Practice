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

void solve(){
    ll a,b,c, on = 1, ans1;
    cin>>a>>b>>c;
    if ((max(a,b) - min(a,b))%2==0)ans1=(max(a,b) - min(a,b))/2;
    else ans1=(max(a,b) - min(a,b))/2 + 1;
    if (ans1%c==0)cout<<ans1/c<<"\n";
    else cout<<ans1/c + 1<<"\n";
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}