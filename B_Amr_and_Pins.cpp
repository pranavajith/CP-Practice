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
    double r,x1,y1,x2,y2;
    // double d = 1;
    cin>>r>>x1>>y1>>x2>>y2;
    // ll dist = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
    double d = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
    // cout<<dist<<" "<<4*r*r<<"!\n";
    if (d-(int)d==0 && int(d)%int(2*r)==0)cout<<int((d)/(2*r));
    else {
        int i = floor(d/(2*r))+1;
        cout<<i;
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