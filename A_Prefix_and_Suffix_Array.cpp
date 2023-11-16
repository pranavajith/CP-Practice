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
    ll n;
    cin>>n;
    // vector <string> v(n);
    string temp;
    string s1, s2;
    for (int i=0; i<2*n-2; i++){
        cin>>temp;
        if (temp.size() == n-1){
            if (s1.size() == 0) s1 = temp;
            else s2 = temp;
        }
    }
    reverse(s1.begin(), s1.end());
    if (s2==s1)cout<<"YES\n";
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