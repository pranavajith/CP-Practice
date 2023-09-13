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
    while (n--){
        string s;
        cin>>s;
        if (s[0]=='I')sol+=20;
        else if (s[0]=='C')sol+=6;
        else if (s[0]=='T')sol+=4;
        else if (s[0]=='D')sol+=12;
        else sol+=8;
    }
    cout<<sol<<"\n";
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