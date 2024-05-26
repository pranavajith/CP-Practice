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
    string s,t;
    cin>>s>>t;
    vector<int> cnt(26,0);
    for(auto i:t){
        cnt[i-'A']++;
    }    
    string temp="";
    for(int i=s.size()-1;i>=0;i--){
        if(cnt[s[i]-'A']>0){
            temp+=s[i];
            cnt[s[i]-'A']--;
        }
    }
    reverse(temp.begin(),temp.end());
    if(temp==t){
        cout<<"YES\n";
    }
    else cout<<"NO\n";
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