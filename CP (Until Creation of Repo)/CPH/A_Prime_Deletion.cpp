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
    string s;
    cin>>s;
    for (auto d:s){
        if (d=='1'){
            cout<<13<<"\n";
            return;
        }
        else if (d=='3'){
            cout<<31<<"\n";
            return;
        }
    }
    
}

int main() 
{
    // TxtIO;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}