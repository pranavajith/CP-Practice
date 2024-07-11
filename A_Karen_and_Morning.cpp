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
    int a,b,c,d,x,y,z,ans=0;
      char ch;
      cin>>x>>ch>>y;
      a=x/10;b=x%10;
      z=(b*10)+a;
      if(z==y){
        cout<<0<<endl;
        return;
      }
      while(z!=y){
        y++;
        ans++;
        if(y==60){
            y=0;
            x++;
            if(x==24){
                x=0;
                cout<<ans<<endl;
                return;
            }
            a=x/10;b=x%10;
            z=(b*10)+a;
        }
        if(z==24)z=0;
      }
      cout<<ans<<endl;
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