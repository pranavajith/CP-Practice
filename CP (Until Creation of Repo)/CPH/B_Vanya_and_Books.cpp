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
    ll n, sol=0;
    cin>>n;
    ll digit_count = floor(log10(n)+1);
    ll i=0;
    for (i=1;i<digit_count;i++){
        if (i==1)sol+=9;
        else sol+=(pow(10,i)-pow(10,i-1))*i;
        // cout<<sol<<" ";
    }
    // cout<<i<<"\n";
    cout<<setprecision(0);
    cout<<fixed<<sol+(n-(pow(10,i-1))+1)*i<<"\n";
}

int main() 
{
    // TxtIO;
    // ll t;
    // cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}