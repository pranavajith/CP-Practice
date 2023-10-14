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
    cin>>n; n--;
    vector <ll> vx, vy;
    ll x = 1, y=1;
    vx.push_back(-1);  vx.push_back(-1);  vx.push_back(0);  vx.push_back(0);  vx.push_back(0);  vx.push_back(1);  vx.push_back(1); 
    vy.push_back(-1);  vy.push_back(0);  vy.push_back(-1);  vy.push_back(0);  vy.push_back(1);  vy.push_back(0);  vy.push_back(1); 
    while (n--){
        vx.push_back(x); vx.push_back(x+1); vx.push_back(x+1); 
        vy.push_back(y+1); vy.push_back(y); vy.push_back(y+1); 
        x++; y++;
    }
    cout<<vx.size()<<"\n";
    for (int i=0 ; i<vx.size(); i++)cout<<vx[i]<<" "<<vy[i]<<"\n";
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