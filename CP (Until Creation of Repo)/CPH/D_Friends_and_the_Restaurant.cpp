#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <algorithm>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n;
    cin>>n;
    vector <ll> temp(n);
    for (int i=0;i<n;i++)cin>>temp[i];
    vector <ll> v(n);
    for (int i=0;i<n;i++){
        cin>>v[i];
        v[i]-=temp[i];
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    int j = n-1, ans=0;
    for (int i=0;i<n;i++){
        while (j>i && v[i]+v[j]<0)j--;
        if (j<=i)break;
        ans++;j--;
    }
    cout<<ans<<"\n";
    
    // while (a<b){
    //     rsum+=v[b];
    //     if (-1*v[a]<=rsum){
    //         ans++;
    //         a++;
    //         b--;
    //         rsum=0;
    //     }
    //     else{

    //     }
    // }
}

int main() 
{
    // TxtIO;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}