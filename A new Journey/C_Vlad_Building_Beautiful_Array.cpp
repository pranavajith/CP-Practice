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
    set <ll> s;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        s.insert(a);
    }
    if (*s.begin()%2==0){
        ll countodd = 0;
        for (auto itr = s.begin();itr != s.end();itr++){
            if (*itr % 2 == 1){
                countodd++;
                break;
            }
        }
        if (countodd > 0)cout<<"NO\n";
        else cout<<"YES\n";
    }
    else{
        cout<<"YES\n";
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