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
    ll a,b, ans=0;
    cin>>a>>b;
    if ((a-1)%4==0)ans = (a-1)^0;
    else if ((a-1)%4==1)ans = 1;
    else if ((a-1)%4==2)ans = a;
    else ans = 0;
    if ((ans^b)==a)cout<<a+2<<"\n";
    else if (ans==b)cout<<a<<"\n";
    else cout<<a+1<<"\n";
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