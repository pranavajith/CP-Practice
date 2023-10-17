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
    ll l,r,m,b,c;
    cin>>l>>r>>m;
    for (int a = l; a<=r; a++){
        ll n = (m+(r-l))/a;
        if (n*a >= m-(r-l) && n*a <= (m+(r-l))){
            if (m>=n*a){
                b=r;
                c=b - (m - n*a);
                cout<<a<<" "<<b<<" "<<c<<"\n";
                return;
            }
            else{
                c = r;
                b = c - (n*a - m);
                cout<<a<<" "<<b<<" "<<c<<"\n";;
                return;
            }
        }
    }
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