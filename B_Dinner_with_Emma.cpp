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
      int n,m;
         cin>>n>>m;
 
         int arr[n+1][m+1];
         vector<int>v;
         for(int i=1;i<=n;i++){
            
             int ans=1e9+7;
 
            for(int j=1;j<=m;j++){
 
                cin>>arr[i][j];
                ans=min(arr[i][j],ans);
            }
 
            v.push_back(ans);
         }
         
         sort(v.begin(),v.end());
 
         cout<<v[v.size()-1]<<endl;
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