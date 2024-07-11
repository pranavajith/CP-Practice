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
    int n;
    cin>>n;
    int oc_1=0;
    int ec_1=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x&1)oc_1++;
        else ec_1++;
    }
    int m;
    cin>>m;
    ll int oc_2=0;
    ll int ec_2=0;
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        if(x&1)oc_2++;
        else ec_2++;
    }
    ll int ans=1ll*(oc_1*oc_2)+1ll*(ec_1*ec_2);
    cout<<ans<<endl;
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