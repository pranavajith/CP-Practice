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

void solve(){
    ll n,m;
    cin>>n>>m;
    string s1, s2;
    cin>>s1>>s2;
    auto it = find(s1.begin(), s1.end(), '*');
    if (it==s1.end()){
        if (s1==s2)cout<<"YES\n";
        else cout<<"NO\n";
    }
    else{
        ll ind = it - s1.begin();
        // string s3 = s2;
        // reverse(s3.begin(), s3.end());
        // cout<<s1.substr(0,ind)+s1.substr(ind+1, s1.size()-ind-1) <<"\n";
        // cout<<s2.substr(0,ind)+s2.substr(s2.size()-(s1.size()-ind-1), s1.size()-ind-1) <<"\n";
        // cout<<s1.size()-ind-1<<"\n";
        // cout<<s2.size()-1-(s1.size()-ind-1)<<"\n";
        if (s2.size() < s1.size()-1)cout<<"NO\n";
        else if (s1.substr(0,ind)+s1.substr(ind+1, s1.size()-ind-1) == s2.substr(0,ind)+s2.substr(s2.size()-(s1.size()-ind-1), s1.size()-ind-1))cout<<"YES\n";
        else cout<<"NO\n";
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