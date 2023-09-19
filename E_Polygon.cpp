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
    ll n;
    cin>>n;
    vector <string> v;
    for (int i=0;i<n;i++){
        string s;
        cin>>s;
        v.push_back(s);
    }
    for (int i=0;i<n-1;i++){
        for (int j=0;j<n-1;j++){
            if (v[i][j]=='1' && (v[i][j+1]=='0' && v[i+1][j]=='0')){
                cout<<"NO\n";
                return;
            }
        }
    }
    cout<<"YES\n";
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