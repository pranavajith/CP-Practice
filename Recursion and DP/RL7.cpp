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

int printF(int i, int arr[], int n, int s, int x){
    if (s>x)return 0;
    if (i==n){
        if (s==x)return 1;
        return 0;
    }
    s+=arr[i];
    int l = printF(i+1, arr, n, s, x);
    s-=arr[i];
    int r = printF(i+1, arr, n, s, x);
    return l+r;
}


void solve(){
    int arr[] = {1,2,1};
    int n=3;
    int x = 2;
    // vector <ll> v;
    cout<<printF(0,arr, n, 0, x)<<"\n";
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