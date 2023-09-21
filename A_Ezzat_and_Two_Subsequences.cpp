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
    double n;
    double sum1=0;
    cin>>n;
    vector <ll> v;
    for (int i=0;i<n;i++){
        double a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for (int i=0;i<n-1;i++){
        sum1+=v[i];
    }
    // double ans = sum1
    cout<<fixed<<sum1/(n-1)+v[n-1]<<"\n";

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