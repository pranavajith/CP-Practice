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
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    int maxi=0;
    int cnt=0;
    for(int i=0;i<n;++i){
      if(s[i]=='.'){
          maxi=max(maxi,cnt);
          cnt=0;
      }
      else{
          cnt++;
      }
    }
    if(maxi<=k-1){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
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