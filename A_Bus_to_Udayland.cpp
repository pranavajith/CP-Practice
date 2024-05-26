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
    ll n; cin>>n;
    vector <string> v(n);
    bool check = true;
    for (int i=0; i<n; i++) {
        cin>>v[i];
        if (check){
            // cout<<"Yay!\n";
            if (v[i][0] == 'O' && v[i][1] == 'O') {
                v[i][0] = '+'; v[i][1] = '+'; check = false;
            }
            else if (v[i][3] == 'O' && v[i][4] == 'O') {
                v[i][3] = '+'; v[i][4] = '+'; check = false;
            }
        }
        // cout<<v[i]<<"\n";
    }
    if (check) cout<<"NO\n";
    else {
        cout<<"YES\n";
        for (auto d:v) cout<<d<<"\n";
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