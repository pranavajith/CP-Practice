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
    ll n,g,b;
    cin>>n>>g>>b;
    // ll n1 = n;
    // n= (n+1)/2;
    // if (n==4 && g==10 && b==10)cout<<8<<"\n";
    // if (g>=n)cout<<n<<"\n";
    // else{
        ll needg = (n+1)/2;
        ll total = (b+g)*(needg/g);
        if (needg%g)total+=needg%g;
        else total-=b;
        cout<<max(n,total)<<"\n";
    // }
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