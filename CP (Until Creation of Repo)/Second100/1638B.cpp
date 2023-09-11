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

void solve() {
    ll n;
    cin >> n;
    vector<ll> even;
    vector<ll> odd;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        if (a%2==0){
            even.push_back(a);
        }
        else{
            odd.push_back(a);
        }
    }
    vector <ll> copy1 = even;
    vector <ll> copy2 = odd;
    sort(even.begin(),even.end());
    sort(odd.begin(),odd.end());
    if (copy1==even && copy2==odd){
        cout<<"Yes\n";
    }
    else{
        cout<<"No\n";
    }
}


int main() 
{
    // lTxtIO;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}