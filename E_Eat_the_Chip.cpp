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
    ll h,w,xa, ya, xb, yb;
    cin>>h>>w>>xa>>ya>>xb>>yb;
    if (xa > xb || ((xa == xb) && (ya != yb))) {
        cout<<"Draw\n";
        return;
    }
    if ((xb - xa) % 2 == 0) {
        // even -> bob wins or draw
        if (ya == yb) cout<<"Bob\n";
        else if (abs(ya - yb) > (xb - xa)/2) cout<<"Draw\n";
        else if (ya > yb) {
            if (w > yb + (xb - xa) / 2) cout<<"Draw\n";
            else cout<<"Bob\n";
        }
        else {
            if (1 < (yb - (xb - xa) / 2)) cout<<"Draw\n";
            else cout<<"Bob\n";
        }
    }
    else {
        // odd -> alice wins or draw
        if (ya == yb) {
            cout<<"Alice\n";
            return;
        }
        xa++;
        if (ya > yb) ya--; 
        else ya++;
        // cout<<xa<<" "<<ya<<", "<<xb<<" "<<yb<<"\n";
        if (ya == yb) {
            cout<<"Alice\n";
            return;
        }
        if (abs(ya - yb) > (xb - xa)/2) cout<<"Draw\n";
        else if (yb > ya) {
            // cout<<"ok";
            if (w > ya + ((xb - xa) / 2)) cout<<"Draw\n";
            else cout<<"Alice\n";
        }
        else {
            // cout<<yb<<
            if (1 < ya - (xb - xa) / 2) cout<<"Draw\n";
            else cout<<"Alice\n";
        }
        // if (abs(ya - yb) > (xa - xb)/2) cout<<"Draw\n";
        // else if (ya > yb) {
        //     if (w > yb + (xa - xb) / 2) cout<<"Draw\n";
        //     else cout<<"Alice\n"; 
        // }
        // else {
        //     if (ya > yb - (xa - xb) / 2) cout<<"Draw\n";
        //     else cout<<"Alice\n";
        // }
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