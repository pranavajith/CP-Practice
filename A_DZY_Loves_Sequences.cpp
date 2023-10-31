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
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n;
    cin>>n;
    vector <ll> v(n);
    for (int i=0; i<n; i++) cin>>v[i];
    vector <ll> left(n, 1), right(n, 1);
    ll leftcounter = 1, rightcounter = 1;
    for (int i=1; i<n; i++){
        if (v[i-1] < v[i])leftcounter++;
        else leftcounter = 1;
        left[i] = leftcounter;
    }
    for (int i=n-2; i>=0; i--){
        if (v[i+1] > v[i])rightcounter++;
        else rightcounter = 1;
        right[i] = rightcounter;
    }
    ll maxans = -1;
    for (int i = 1; i<n-1; i++){
        // if (i==0){
        //     maxans = max(maxans, right[i]+1);
        // }
        // else if (i==n-1){
        //     maxans = max(maxans, left[i] +1 );
        // }
        if (v[i-1] + 1 < v[i+1]){
            maxans = max(maxans, left[i-1] + right[i+1] + 1);
        }
    }
    for (int i=0; i<n; i++){
        maxans = max(maxans, left[i]+1);
    }
    for (int i=0; i<n; i++){
        maxans = max(maxans, right[i]+1);
    }
    // for (auto d:left)cout<<d<<" "; cout<<"\n";
    // for (auto d:right)cout<<d<<" "; cout<<"\n";
    if (n==1){
        cout<<1; return;
    }
    else if (left[n-1]==n){
        cout<<n<<"\n";
        return;
    }
    cout<<maxans<<"\n";
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