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
    long long a[100100];
     long long n,k;
    cin>>n>>k;
    for(int i=0;i<k;i++){
        cin>>a[i];
    }
    long long ans=0,mn=1000000000011111111,j=1,m=0;
    if(n>0){
     for(int i=0;i<k;i++){
        if(a[i]>n)
            continue;
        else{
            ans=(n/a[i]);
            ans=ans*a[i];
            ans=n-ans;
            mn=min(ans,mn);
            if(mn==ans){
                j=i+1;
                m=n/a[i];
            }
        }
     }
     }
     cout<<j<<" "<<m;
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