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
    string s1, s2;
    cin>>s1>>s2;
    ll x1 = 0 , x2 = 0;
    for (int i=0; i<s1.size(); i++){
        if (s1[i]=='+')x1++;
        else x1--;
    }
    for (int i=0; i<s2.size(); i++){
        if (s2[i]=='+')x2++;
        else if (s2[i]=='-') x2--;
    }
    ll diff = x2 - x1, question = count(s2.begin(), s2.end(), '?'); double ans = 0;
    // cout<<question<<"\n";
    if (question==0){
        if (x2==x1)cout<<1<<"\n";
        else cout<<0<<"\n";
        return;
    }
    for (int i=0; i<(1<<question); i++){
        // cout<<i<<" ";
        ll temp = i, diff1 = 0;
        for (int j=0; j<question; j++){
            if ((temp>>j) & 1) diff1++;
            else diff1--;
        }
        // cout<<diff1<<"\n";
        if (diff1==diff) ans++;
    }
    cout<<fixed<<setprecision(12)<<ans/(1<<question)<<"\n";
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