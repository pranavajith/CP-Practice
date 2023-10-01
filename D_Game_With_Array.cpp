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
    ll n,s;
    cin>>n>>s;
    if (2*n>s)cout<<"NO\n";
    else{
        vector <ll> v;
        cout<<"YES\n";
        for (int i=0;i<n-1;i++){
            cout<<2<<" ";
        }
        cout<<(s-2*(n-1))<<"\n";
        cout<<1<<"\n";
    }

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