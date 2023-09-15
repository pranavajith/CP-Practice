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
    ll n, sol = 0, count1 = 0;
    cin>>n;
    bool check = false;
    for (int i=0;i<=n;i++){
        ll a;
        if (i==n)a=1;
        else cin>>a;
        if (a==1){
            // check = false;
            sol = max(sol, count1);
            count1=0;
        }
        else count1++;
    }
    cout<<sol<<"\n";
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