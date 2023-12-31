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
    vector <ll> v;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    ll scorealice = 0, scorebob = 0, i = 1;
    while (v.size()!=0){
        if (i%2){
            if (v.back()%2==0)scorealice+=v.back();
            v.pop_back();
        }
        else{
            if (v.back()%2)scorebob+=v.back();
            v.pop_back();
        }
        i++;
    }
    // cout<<scorealice<<" "<<scorebob<<"\n";
    if (scorealice > scorebob)cout<<"Alice\n";
    else if (scorealice < scorebob)cout<<"Bob\n";
    else cout<<"Tie\n";
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