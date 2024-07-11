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
    int a1,a2,k1,k2,n;
    cin>>a1>>a2>>k1>>k2>>n;
 
    int tmp = a1*(k1-1) + a2*(k2-1);
    int mn,mx;
 
    if(tmp >= n) {
      mn = 0;
    }
    else {
      mn = n-tmp;
    }
 
    if(k1 > k2) {
       tmp = n/k2;
       int p = min(a2,tmp);
       n -= p*k2;
       tmp = n/k1;
       int q = min(a1,tmp);
       mx = p + q;
    }
    else {
       tmp = n/k1;
       int p = min(a1,tmp);
       n -= p*k1;
       tmp = n/k2;
       int q = min(a2,tmp);
       mx = p + q;
    }
 
    cout<<mn<<" "<<mx<<endl;
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