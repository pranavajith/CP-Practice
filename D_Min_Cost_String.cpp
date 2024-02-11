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
    ll n,k;
    cin>>n>>k;
    string s; ll curlen = 0;
    for (int i=0; i<k; i++){
        char c = 'a' + i;
        ll dislen = 2*(k-i-1) + 1;
        if (i==k) dislen++;
        string temp;
        for (char t = c; t < 'a' + k-1; t++) {
            temp+=t; temp+=c;
        }
         temp+='a'+k-1;
        if (i==k-1) {
            temp+='a'+k-1;
        }
        curlen += dislen;
        s+=temp;
        if (curlen >= n) {
            cout<<s.substr(0, n)<<"\n";
            return;
        }
    }
    // cout<<"ok";
    // cout<<n/s.size()<<"\n";
    s.pop_back();
    for (int i=0; i<n/s.size(); i++) cout<<s;
    // cout<<"\nhere is s : "<<s<<"\n";
    cout<<s.substr(0, n%s.size())<<"\n";
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