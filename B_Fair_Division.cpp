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
    ll n, count1=0, count2=0;
    cin>>n;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        if (a==1)count1++;
        else count2++;
    }
    if ((count1+count2*2) % 2 != 0)cout<<"NO\n";
    else if (count1>=2)cout<<"YES\n";
    else if (count1==0 && count2%2==0)cout<<"YES\n";
    else cout<<"NO\n";
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