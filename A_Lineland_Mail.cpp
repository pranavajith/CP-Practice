#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <queue>
#include <stack>
#include <algorithm>
#include <limits>
#include <iomanip>
using namespace std;
#define ll long long
ll mod = 1e9 + 7;
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n;
    cin>>n;
    vector <ll> v(n); 
    for (int i=0; i<n; i++)cin>>v[i];
    // ll minx = *min_element(v.begin(), v.end());
    // ll maxx = *max_element(v.begin(), v.end());
    for (int i=0; i<n; i++){
        if (i==0){
            cout<<v[1]-v[0]<<" "<<v[n-1]-v[0]<<"\n";
        }
        else if (i==n-1){
            cout<<v[n-1] - v[n-2]<<" "<<v[n-1]-v[0]<<"\n";
        }
        else{
            cout<<min(v[i]-v[i-1], v[i+1]-v[i])<<" "<<max(v[i]-v[0], v[n-1]-v[i])<<"\n";
        }
        // if (v[i] == minx){

        // }
        // else if (v[i] == maxx){

        // }
        // else{

        // }
    }
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