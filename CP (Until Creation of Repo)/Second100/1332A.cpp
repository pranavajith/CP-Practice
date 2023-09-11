#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <algorithm>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll a,b,c,d,x,y,x1,y1,x2,y2;
    cin>>a>>b>>c>>d>>x>>y>>x1>>y1>>x2>>y2;
    ll w=x,e=y;
    x+=b-a; y+=d-c;
    // cout<<y<<" "<<y1<<"\n";
    if ((x>=x1) && (x<=x2) && (y>=y1) && (y<=y2) && ((b == 0 && a == 0) || x1<(w) || x2>(w)) && ((c == 0 && d==0) || y1<(e) || y2>(e))){
        cout<<"Yes\n";
    }
    else cout<<"No\n";
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