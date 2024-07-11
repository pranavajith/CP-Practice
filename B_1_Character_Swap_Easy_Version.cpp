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
    ll n; cin >> n;
   vector<pair<char, char> >chara;
   string s, t; cin >> s >> t;
   ll f = 1;
   for(int i = 0;i < n;i++)
   {
      char ch1 = s[i], ch2 = t[i];
      if(ch1 == ch2) continue;
      else chara.push_back({ch1, ch2});
   }  
   if(chara.size() > 2){
      cout << "NO" << "\n";
      return;
   }
   else{
        if(chara[0].first == chara[1].first && chara[0].second == chara[1].second)
        {
            cout << "YES" << "\n";
            return;
        }
        else{
            cout << "NO" << "\n";
            return;
        }
   }
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