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
int N = 1e9;

void solve()
{
   ll n;
   cin>>n;
 
   ll arr[n+5];
 
   for(ll i=1; i<=n; i++)
   {
      cin>>arr[i];
   }
 
   vector<ll> ans;
 
   for(ll i=1; i<=n; i++)
   {
       ll anss=0;
       if(i==arr[i])
       {
           ans.push_back(1);
       }
       else
       {
           ll temp=arr[i];
           ll tmp=arr[arr[i]];
           anss++;
           while(tmp!=temp)
           {
               tmp=arr[tmp];
               anss++;
           }
           ans.push_back(anss);
       }
   }
   for(auto a:ans)
   {
       cout<<a<<" ";
   }cout<<endl;
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