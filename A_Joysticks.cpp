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
    ll a,b, t = 0;
    cin>>a>>b;
    if (a<2 && b<2){
        cout<<0<<"\n";
        return;
    }
    ll alt = 0;
    while (a>2 || b>2){
        if (alt%2==0){
            if (a%2){
                t+=a/2;
                b+=a/2;
                a=1;
            }
            else{
                t+=a/2-1;
                b+=a/2-1;
                a=2;
            }
        }
        else{
            if (b%2){
                t+=b/2;
                a+=b/2;
                b=1;
            }
            else{
                t+=b/2-1;
                a+=b/2-1;
                b=2;
            }
        }
        alt++;
    }
    cout<<t+1<<"\n";
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