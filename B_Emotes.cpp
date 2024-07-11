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

bool cmp(ll a,ll b){
	return a>b;
}	

void solve(){
    ll n,m,k,i;
    cin >> n >>m >>k;
    ll a[n];
    for(i=0;i<n;i++)
    cin >> a[i];
    sort(a,a+n,greater<int>());
    ll c=k+1;
    ll s=a[0]*k+a[1];
    cout << ((m/c)*s)+((m%c)*a[0]) << endl;
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