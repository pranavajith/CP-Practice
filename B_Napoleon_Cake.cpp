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
int a[10000000];
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    
    int n;
    cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i];
}
a[n]=-1;
for(int i=n-1;i>=0;i--){
    a[i]=max(a[i],a[i+1]-1);
}
for(int i=0;i<n;i++){
    if(a[i]==0){cout<<0<<" ";}else{cout<<1<<" ";}
}
cout<<endl;
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