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
    if (n%6==0)cout<<n*n/2 - 5*n/3<<"\n";
    else if (n%6==1 || n%6==5)cout<<n*n/2 - n/2<<"\n";
    else if (n%6==2 || n%6==4)cout<<n*n/2 - n<<"\n";
    else cout<<n*n/2 - 7*n/6<<"\n";
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