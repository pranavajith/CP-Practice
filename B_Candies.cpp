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
    bool check = false;
    vector <ll> v;
    if (n%2==0)cout<<-1<<"\n";
    else {
        for (int i=31; i>0; i--){
            if ((n>>i) & 1){
                v.push_back(2);
                check = true;
            }
            else if (check == true)v.push_back(1);
        }
        cout<<v.size()<<"\n";
        for (auto d:v)cout<<d<<" ";cout<<"\n";
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