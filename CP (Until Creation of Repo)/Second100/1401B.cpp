#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll x1,y1,z1,x2,y2,z2, ans=0;
    cin>>x1>>y1>>z1>>x2>>y2>>z2;
    ll m = min(x1,z2);
    z2-=m; 
    x1-=m;
    m = min(y1,x2);
    y1-=m;
    x2-=m;
    m = min(y2,z1);
    y2-=m;
    z1-=m;
    ans+=2*m;
    ans-=2*(min(y1,z2));
    cout<<ans<<"\n";

    
}

int main() 
{
    // lTxtIO;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}