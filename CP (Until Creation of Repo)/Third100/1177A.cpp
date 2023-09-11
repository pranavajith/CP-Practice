#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <algorithm>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n;
    cin>>n;
    if (n<=9){
        cout<<n<<"\n";
    }
    else if (n<=189){
        n-=9;
        cout<<to_string(9+(n+1)/2)[(n+1)%2]<<"\n";
    }
    else if (n<=2889){
        n-=189;
         cout<<to_string(99+(n+2)/3)[(n-1)%3]<<"\n";
    }
    else{
        n-=2889;
         cout<<to_string(999+(n+3)/4)[(n-1)%4]<<"\n";
    }
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