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
    ll a,b, sum1=0, sum2=0;
    cin>>a>>b;
    for (int i=0;i<a;i++){
        ll c;
        cin>>c;
        sum1+=c;
    }
    for (int i=0;i<b;i++){
        ll c;
        cin>>c;
        sum2+=c;
    }
    if (sum1>sum2)cout<<"Tsondu\n";
    else if (sum2>sum1)cout<<"Tenzing\n";
    else cout<<"Draw\n";
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}