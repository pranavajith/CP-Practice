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
    string s;
    cin>>s;
    vector <ll> v(s.size());
    ll countQ = 0, sol = 0;
    for (int i=s.size()-1;i>=0;i--){
        if (s[i]=='Q')countQ++;
        v[i]=countQ;
    }
    for (int i=1;i<s.size()-1;i++){
        if (s[i]=='A'){
            sol+=(v[0]-v[i])*v[i];
        }
    }
    cout<<sol<<"\n";
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