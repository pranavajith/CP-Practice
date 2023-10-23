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
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    string s;
    cin>>s;
    string temp;
    set <ll> setv;
    ll n = s.size();
    for (int i=0; i<n; i++){
        if (s[i]!=',')temp.push_back(s[i]);
        else{
            setv.insert(stoi(temp));
            temp.clear();
        }
    }
    setv.insert(stoi(temp));
    vector <ll> v(setv.begin(), setv.end());
    // for (auto d:setv)cout<<d<<" "; cout<<"\n";
    string ans;
    bool check = false;
    ans+=to_string(v[0]);
    for (int i=1; i<v.size(); i++){
        if (v[i] == v[i-1] + 1) check = true;
        if (v[i] != v[i-1] + 1){
            if (check){
            ans+='-';
            ans+=to_string(v[i-1]);
            }
            ans+=',';
            ans+=to_string(v[i]);
            check = false;
        }
    }
    if (v[v.size()-1] == v[v.size()-2] + 1){
        ans+='-';
        ans+=to_string(v[v.size()-1]);
    }
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