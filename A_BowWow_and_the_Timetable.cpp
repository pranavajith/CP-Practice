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
    string s;
    cin>>s;
    if (s=="0"){
        cout<<0<<"\n";
        return;
    }
    ll n = s.size();
    ll temp = 1, cnt = 1;
    while (temp + 2 <= n){
        temp += 2; cnt++;
    }
    if (count(s.begin(), s.end(), '1') == 1 && temp == n) cnt--;
    cout<<cnt<<"\n";
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