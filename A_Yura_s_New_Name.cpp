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
    ll count1=0;
    cin>>s;
    for (int i=0;i<s.size()-1;i++){
        if (s[i]=='_' && s[i+1]=='_')count1++;
    }
    if (s[0]=='_')count1++;
    if (s[s.size()-1]=='_')count1++;
    if (s=="^")count1++;
    cout<<count1<<"\n";
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