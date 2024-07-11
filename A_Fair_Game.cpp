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
      int n;
    cin>>n;
    int a[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin>>a[i];
    }
    
   int r= 0, o = 0, c = 0;
   for(int i = 0 ; i < n ; i++)
   {
       if(a[i] == a[0]) o++;
   }
   for(int i = 0 ; i < n ; i++)
   {
       if(a[i] != a[0]) 
       {r = a[i];
       break;}
   }
    for(int i = 0 ; i < n ; i++)
   {
       if(a[i] == r) c++;
   }
 if(o == c && o+c == n)
 cout<<"YES"<<endl<<a[0]<<" "<<r;
 else cout<<"NO";
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