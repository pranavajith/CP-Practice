#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

struct laptop{
    int cost;
    int quality;
};

bool sort_laptop(laptop a, laptop b){
    return a.cost > b.cost;
}

void solve(){
    ll n;
    cin>>n;
    laptop l[n];
    for (int i=0;i<n;i++){
        ll a,b;
        cin>>a>>b;
        l[i].cost = a;
        l[i].quality = b;
    }
    sort(l, l+n, sort_laptop);
    // cout<<l[0].cost;
    for (int i=0;i<n-1;i++){
        if (l[i].quality < l[i+1].quality){
            cout<<"Happy Alex\n";
            return;
        }
    }
    cout<<"Poor Alex\n";

}

int main() 
{
    // lTxtIO;
    // ll t;
    // cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}