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
    ll n, numsheep = 0;
    cin>>n;
    string s;
    cin>>s;
    map  <ll,ll>  m;
    for (int i=0;i<n;i++){
        if (s[i]=='*'){
            numsheep++;
            // v.push_back(make_pair(numsheep, i+1));
            m[numsheep]=i+1;
        }
    }
    ll sol = 0;
    // cout<<m[(numsheep+1)/2]<<"\n";
    for (int i=1;i<=numsheep;i++){
        sol += abs(m[i] - (m[(numsheep+1)/2] - (numsheep+1)/2 + i));
    }
    cout<<sol<<"\n";

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