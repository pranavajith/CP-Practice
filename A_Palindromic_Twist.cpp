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
    string s;
    cin>>s;
    bool b=1;
    for(int i=0;i<s.size()/2;i++)
    {
      if(abs(s[n-i-1]-s[i])>2 || abs(s[n-i-1]-s[i])==1)
      {
        b=0;
        break;
      }
      // cout<<abs(s[n-i-1]-s[i])<<endl;
    }
    if(b)
    cout<<"YES";
    else
    cout<<"NO";
 
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