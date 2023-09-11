#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
using namespace std;
#define ll long long

void solve(){
    ll a,b,c;
    cin>>a>>b>>c;
    ll x = sqrt(a*b*c)/a;
    ll y = sqrt((a*b*c))/b;
    ll z = sqrt((a*b*c))/c;
    cout<<(x+y+z)*4<<endl;
}

int main() 
{

        solve();
    
    return 0;
}