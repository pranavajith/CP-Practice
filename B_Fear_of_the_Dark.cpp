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

double dist(double p1x, double p1y, double p2x, double p2y){
    return (p1x - p2x)*(p1x - p2x) + (p1y - p2y)*(p1y - p2y);
}

void solve(){
    double px, py, ax, ay, bx, by, ox = 0, oy = 0;
    cin>>px>>py>>ax>>ay>>bx>>by;
    double ap = dist(px, py, ax, ay);
    double bp = dist(px, py, bx, by);
    double ao = dist(ox, oy, ax, ay);
    double bo = dist(ox, oy, bx, by);

    // Single Point se kaam

    double amin = max(ap, ao);
    double bmin = max(bp, bo);
    // cout<<sqrt(ap);

    double midabx = (ax + bx)/2, midaby = (ay + by)/2;

    // if a is closer to origin

    double acloserO = max(max(ao, dist(midabx, midaby, ax, ay)), bp);

    // if b is closer to origin
    double bcloserO = max(max(bo, dist(midabx, midaby, ax, ay)), ap);

    cout<<setprecision(10)<<fixed<<sqrt(min(min(amin, bmin), min(acloserO, bcloserO)))<<"\n";

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