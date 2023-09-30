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
    vector <ll> integers(n), gifts(k);
    for (int i=0;i<n;i++)cin>>integers[i];
    for (int i=0;i<k;i++)cin>>gifts[i];
    sort(integers.begin(), integers.end()); sort(gifts.begin(), gifts.end());
    reverse(gifts.begin(), gifts.end());
    // vector <ll> prefsum;
    // // prefsum.push_back(0);
    // for (int i=0;i<k;i++){
    //     if (i==0)prefsum.push_back(gifts[i]);
    //     else prefsum.push_back(prefsum.back()+gifts[i]);
    // }
    // // for (auto d:prefsum)cout<<d<<" ";
    // ll sol = integers[0];
    // for (int i=0;i<k-1;i++){
    //     sol+=integers[prefsum[i]-1] + integers[prefsum[i]];
    // }
    // sol+=integers[n-1];
    // cout<<sol<<"\n";
    ll curpos = 0, curlast = n-1, sol = 0, iter=0;
    while (iter<k){
        sol+=integers[curpos]+integers[curlast];
        curpos+=gifts[iter++];
        curlast--;
    }
    cout<<sol<<"\n";
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