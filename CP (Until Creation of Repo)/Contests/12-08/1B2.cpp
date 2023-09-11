#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <algorithm>
#include <iomanip>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    double ax1,ax2,ay1,ay2,bx1,bx2,by1,by2,ux,uy;
    cin>>ax1>>ay1>>ax2>>ay2>>bx1>>by1>>bx2>>by2>>ux>>uy;
    double m1 = (by1-ay1)/(bx1-ax1);
    double m2 = (by2-ay1)/(bx2-ax1);
    double m3 = (by1-ay2)/(bx1-ax2);
    double m4 = (by2-ay2)/(bx2-ax2);
    double u = uy/ux;
    // cout<<floor(m2)<<ceil(m2)<<endl;
    cout<<m1<<" "<<m2<<" "<<m3<<" "<<m4<<" "<<u;
    double maxm = max(max(m1,m2), max(m3,m4));
    double minm = min(min(m1,m2), min(m3,m4));
    if (maxm>=u && minm<=u || ((uy/abs(uy)==-1 && ux/abs(ux)!=-1)))cout<<"Yes\n";
    else cout<<"No\n";
}

int main() 
{
    // TxtIO;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}