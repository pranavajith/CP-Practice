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
        int n=3;
        vector <ll> a(n); 
        for(int i=0;i<n;i++)cin>>a[i];
        ll ans=0;
        for(int i=0;i<n;i++){
            if(a[i]>0)a[i]--,ans++;
        }
        sort(a.begin(), a.end());
        if(a[0]>0)ans++,a[0]--,a[2]--;
        if(a[1]>0&&a[2]>0)ans++,a[1]--,a[2]--;
        if(a[1]>0&&a[0]>0)ans++,a[1]--,a[0]--;
 
        if(a[0]&&a[1]&&a[2])ans++;
 
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