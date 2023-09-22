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

void printF( ll ind, vector <ll> &v, int arr[], ll n){
    if (ind==n){
        for (auto d:v)cout<<d<<" ";
        cout<<"\n";
        return;
    }
    v.push_back(arr[ind]);
    printF(ind+1,v,arr,n);
    v.pop_back();
    printF(ind+1,v,arr,n);
}

void solve(){
    int arr[]={1,2,3};
    int n = 3;
    vector <ll> v;
    printF(0, v, arr,n);
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