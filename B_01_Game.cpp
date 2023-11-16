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
    stack <ll> st;
    string s; cin>>s; ll count1 = 0;
    for (int i=0; i<s.size(); i++){
        if (st.size()==0 || st.top() == s[i]) st.push(s[i]);
        else {
            st.pop();
            count1++;
        }
    }
    if (count1%2==0)cout<<"NET\n";
    else cout<<"DA\n";
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