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
      string s;cin>>s;
      string str = s;
      sort(s.begin(),s.end());
      char c = 'a';
      if(str == s){
          cout<<"NO"<<endl;
      }
      else{
      for(int i =1;i<n;i++){
         if(str[i]<str[i-1]){
             cout<<"YES"<<endl;
             cout<<i<<" "<<i+1<<endl;
             break;
         }
         
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