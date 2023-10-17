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
    if (n==1){
        cout<<1<<" ";
        return;
    }
    if (n==2){
        cout<<1<<" "<<2<<"\n";
        return;
    }
    if (n==3){
        cout<<1<<" "<<3<<" "<<2<<"\n";
        return;
    }
    ll a=(n+1)/2, iter = 1; cout<<a<<" ";
    while (a!=1 && a!=n){
        a+=iter;
        cout<<a<<" ";
        if (iter>0){
            iter++;
            iter*=-1;
        }
        else{
            iter--;
            iter*=-1;
        }
    }
    if (a==1)cout<<n<<" ";
    else cout<<1<<" ";
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