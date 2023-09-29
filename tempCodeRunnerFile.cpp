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
    ll n, ans=0;
    cin>>n;
    vector <ll> a(n);
    vector <ll> b(n);
    for (int i=0;i<n;i++)cin>>a[i];
    for (int i=0;i<n;i++)cin>>b[i];
    if (n==1){
        if (a[0]==b[0])cout<<1;
        else cout<<0;
        return;
    } 
    // ve s1 (a.begin(), a.end());
    // string s2 (b.begin(), b.end());
    for (int i=0;i<n-1;i++){
        ll ans1=0;
        vector <ll> v1 (b.begin(), b.end()-i);
        vector <ll> v2 (b.begin()+n-i, b.end());
        v2.insert(v2.end(), v1.begin(), v1.end());
        // cout<<s2<<"\n";
        // cout<<s1<<"\n\n";

        for (int j=0;j<n;j++){
            if (a[j]==v2[j])ans1++;
        }
        if (ans1==3)cout<<"here!\n\n";
        ans = max(ans, ans1);
    }
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