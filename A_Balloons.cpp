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
     int n,c=0;
    cin>>n;
    int a[n];
     for(int i=0;i<n;i++) cin>>a[i];
         
     for(int i=0;i<n-1;i++){
         if(a[i]!=a[i+1]) c=1;
     }
     if((c==0 && n==2) || n==1) cout<<"-1";
     else if(n==2){
         if(a[1]<a[0]){
             cout<<"1"<<endl<<"2";
         }
         else cout<<"1"<<endl<<"1";
     }
     else if(n==3 &&  (a[0]+a[1]==a[2])){
             cout<<"1"<<endl<<"1";
     }
     else{
         cout<<(n/2)+1<<endl;
         for(int i=1;i<=(n/2)+1;i++){
             cout<<i<<" ";
         }
     }
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