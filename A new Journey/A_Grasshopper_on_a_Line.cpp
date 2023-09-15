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
    ll n,k;
    cin>>n>>k;
    if (n%k!=0)cout<<1<<"\n"<<n<<"\n";
    else{
        cout<<2<<"\n";
    for (int i=n-1;i>=0;i--){
        if (i%k!=0 && n-i%k!=0){
            cout<<i<<" "<<n-i<<"\n";
            break;
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