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
    ll a, x=0;
    cin>>a;
    while (a--){
        string s;
        cin>>s;
        if (s[1]=='+')x++;
        else x--;
    }
    cout<<x<<"\n";
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    // ll t;
    // cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}