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
    string a, b; cin>>a>>b;
    ll x1 = a[0]-'a', x2 = b[0]-'a', y1 = a[1]-'0', y2 = b[1]-'0';
    ll delX = x2 - x1, delY = y2 - y1;
    cout<<max(abs(delX), abs(delY))<<"\n";
    while (delX || delY){
        if (delX > 0) {
            cout<<"R";
            delX--;
        }
        else if (delX < 0) {
            cout<<"L";
            delX++;
        }
        if (delY > 0) {
            cout<<"U";
            delY--;
        }
        else if (delY < 0) {
            cout<<"D";
            delY++;
        }
        cout<<"\n";
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