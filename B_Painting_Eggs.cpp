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
    ll a = 0, g = 0;
    string s;
    for (int i=0; i<n; i++){
        ll x,y;
        cin>>x>>y;
        if (abs(a+x - g) <= 500){
            a+=x;
            s.push_back('A');
        }
        else{
            g+=y;
            s.push_back('G');
        }
    }
    cout<<s<<"\n";
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