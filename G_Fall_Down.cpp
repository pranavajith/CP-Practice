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
    ll n,m;
    cin>>n>>m;
    vector <string> v(n);
    for (int i=0; i<n; i++) cin>>v[i];
    for (int i=0; i<m; i++){
        ll curLow = n-1;
        for (int j=n-1; j>=0; j--){
            if (v[j][i] == 'o') curLow = j-1;
            else if (v[j][i] == '*'){
                v[j][i] = '.'; v[curLow][i] = '*'; curLow--;
            }
        }
    }
    for (auto d:v){
        cout<<d<<"\n";
    }
    cout<<"\n";
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