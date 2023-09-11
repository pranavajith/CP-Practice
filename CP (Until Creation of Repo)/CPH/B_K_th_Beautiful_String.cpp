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
    ll a,b;
    cin>>a>>b;
    ll n = 1;
    while (n*(n+1)<(2*b))n++;
    // cout<<n;
    b-=n*(n-1)/2;
    ll aplace = a-(n+1);
    ll bplace = a-(b);
    string s="";
    for (int i=0;i<a;i++){
        if (i==aplace || i==bplace){
            s.push_back('b');
        }
        else s.push_back('a');
    }
    cout<<s<<"\n";

}

int main() 
{
    // TxtIO;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}