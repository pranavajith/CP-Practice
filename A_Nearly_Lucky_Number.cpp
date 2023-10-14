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
    string s;
    cin>>s;
    ll count1 = 0;
    for (int i=0; i<s.size();i++)if (s[i]=='7' || s[i]=='4')count1++;
    string s2 =to_string(count1);
    for (int i=0; i<s2.size(); i++){
        if (s2[i]!='7' && s2[i]!='4'){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
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