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
    ll n,k, a = -1;
    cin>>n>>k;
    for (int i=2; i*i <= n; i++){
        if (n%i==0){
            a = i; break;
        }
    }
    if (a==-1)a=n;
    if (k==1)cout<<n+a<<"\n";
    else {
        k--;
        n+=a;
        n+=2*k; cout<<n<<"\n";
    }
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