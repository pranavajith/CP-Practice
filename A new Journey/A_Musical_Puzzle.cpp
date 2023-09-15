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
    ll n, sol = 0;
    cin>>n;
    string s;
    cin>>s;
    map <string, ll> m;
    for (int i=1;i<n;i++){
        string s1 = s.substr(i-1,2);
        if (m[s1])continue;
        else {
            m[s1]++;
            sol++;
        }
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