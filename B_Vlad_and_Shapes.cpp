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
    ll n;
    cin>>n;
    vector <vector <ll> > v(n, vector <ll> (n));
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++) {
            char c;
            cin>>c;
            v[i][j] = c - '0';
        }
    }
    bool check1 = false;
    for (int i=0; i<n; i++){
        for (int j=1; j<n; j++){
            if ((i!=n-1 && v[i][j] == 1 && v[i+1][j] == 0 && v[i+1][j-1] == 1) || (i!=0 && v[i][j] == 1 && v[i-1][j] == 0 && v[i-1][j-1] == 1)) {
                cout<<"TRIANGLE\n";
                return;
            }
        }
    }
    cout<<"SQUARE\n";
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