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
    vector <ll> left, right;
    ll iter2 = 0, iter1 = 0;
    while (iter1 < n && iter2 < m){
        while (s1[iter1]!=s2[iter2])iter1++;
        left.push_back(iter1);
        iter1++; iter2++;
    }
    iter1 = n-1, iter2 = m-1;
    while (iter1>=0 && iter2 >= 0){
        while (s1[iter1] != s2[iter2])iter1--;
        right.push_back(iter1);
        iter1--; iter2--;
    }
    reverse (right.begin(), right.end());
    // for (auto d:left)cout<<d<<" ";cout<<"\n";
    // for (auto d:right)cout<<d<<" ";cout<<"\n";
    ll ans = -1;
    for (int i=0; i<m-1; i++)ans = max(ans, right[i+1]-left[i]);
    cout<<ans<<"\n";
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