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
    // cout<<"ok";
    ll n;
    cin>>n;
    if (n==1) cout<<9<<"\n";
    else if (n==2) cout<<98<<"\n";
    else {
        cout<<989;
        n-=3;
        for (int i=0; i<n; i++){
            cout<<i%10;
        }
        cout<<"\n";
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