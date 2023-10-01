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
    ll n,m,d, totsum = 0;
    cin>>n>>m>>d;
    // vector <vector <ll> > v;
    vector <ll> v1;
    for (int i=0;i<n*m;i++){
        ll a;
        cin>>a;
        v1.push_back(a);
    }
    
    // ll count1=0;
 
    // cout<<count1<<"\n";
    // ll count1=0;
    // for (int i=0;i<n;i++){
    //     for (int j=0;j<m;j++){
    //         count1+=abs(totsum/(n*m)-v[i][j])/d;
    //     }
    // }

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