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
    ll n;
    cin>>n;
    if (n%3){
        if (n>=7){
            cout<<"YES\n";
        cout<<1<<" "<<2<<" "<<n-3<<"\n";
        }
        else cout<<"NO\n";
    }
    else{
        if (n>=10){
            cout<<"YES\n";
            cout<<1<<" "<<4<<" "<<n-5<<"\n";
        }
        else cout<<"NO\n";
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