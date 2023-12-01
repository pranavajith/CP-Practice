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
    string a,b;
    cin>>a>>b;
    vector <ll> v;
    while (b.size()){
        if (a[0]==b.back()){
            // cout<<1<<" ";
            v.push_back(1);
        }
        v.push_back(a.size());
        // cout<<a.size()<<" ";
        b.pop_back();
        string s;
        for (int i=a.size()-1; i>0; i--){
            if (a[i]=='0')s+='1';
            else s+='0';
        }
        a=s;
    }
    cout<<v.size()<<" ";
    for (int i=0; i<v.size(); i++) cout<<v[i]<<" ";
    cout<<"\n";
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