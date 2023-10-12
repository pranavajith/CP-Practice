#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <algorithm>
#include <limits>
#include <iomanip>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

int lengthOfLongestSubstring(string s) {
        int a = 1, ans = 1, curans = 1;
        map <char, ll> m;
        while (a<s.size()){
            cout<<a<<" ";
           while (a<s.size() && s[a]!=s[a-1]){
               a++;
               curans++;
           }
           ans = max(curans, ans);
           curans = 1;
           a++;
        }
        return max(curans,ans);
    }

void solve(){
    cout<<lengthOfLongestSubstring("abcabcbb");
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