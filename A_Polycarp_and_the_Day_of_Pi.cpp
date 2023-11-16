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
string s;
void solve(){
    string s1;
    cin>>s1;
    int i;
    for (i=0; i<s1.size(); i++){
        if (s1[i] != s[i])break;
    }
    cout<<i<<"\n";
}

int main() 
{
    ios_base::sync_with_stdio(false);
    s="314159265358979323846264338327";
    cin.tie(NULL);
    // TxtIO;
    ll t; cin>>t; while(t--)
        solve();
    return 0;
}