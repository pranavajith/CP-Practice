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
    while (n>0 && k>0){
        ll lol = n%10;
        if (k<=lol){
            n-=k;
            k=0;
            break;
        }
        k-=lol+1;
        n/=10;
    }
    if (k>0)cout<<-1*k<<"\n";
    else cout<<n<<"\n";
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