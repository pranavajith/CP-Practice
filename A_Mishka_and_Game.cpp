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

void solve(){
    ll n,a,b,counta=0,countb=0;
    cin>>n;
    while (n--){
        cin>>a>>b;
        if (a>b) counta++;
        else if (b>a) countb++;
    }
    if (counta > countb) cout<<"Mishka\n";
    else if (countb > counta) cout<<"Chris\n";
    else cout<<"Friendship is magic!^^\n";
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