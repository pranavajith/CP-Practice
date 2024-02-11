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
    ll n,a, ans = 0;
    cin>>n;
    // vector <ll> v(n);
    ll count1 = 0, count2 = 0, count3 = 0;
    for (int i=0; i<n; i++){
        cin>>a;
        if (a==4) ans++;
        else if (a==1)count1++;
        else if (a==2)count2++;
        else count3++;
    }
    ll w = min(count1, count3);
    ans+=w; count1-=w; count3-=w;
    // cout<<ans<<" 1 \n";
    ans+=count3; count3 = 0;
    // cout<<ans<<"\n";
    // cout<<ans<<" 2 \n";
    ans+=count2/2; count2%=2;
    // cout<<ans<<" 3 \n";
    if (count2==1){
        if (count1<3){
            ans++;
            count1-=2;
            count1 = max(0LL, count1);
        }
        else {
            ans++;
            count1-=2;
            count1 = max(0LL, count1);
        }
    }
    // cout<<ans<<"\n";
    ans+=count1/4; if (count1%4) ans++; 
    cout<<ans<<"\n";
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