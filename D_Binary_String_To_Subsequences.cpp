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
    ll n;
    cin>>n;
    // vector <ll> v(n);
    string s;
    cin>>s;
    // for (int i=0; i<n; i++)cin>>v[i];
    vector <ll> ans(n);
    vector <ll> pos0, pos1;
    for (int i=0; i<n; i++){
        ll newpos = pos0.size() + pos1.size()+1;
        if (s[i]=='1'){
            if (!pos0.empty())
            {
                newpos = pos0.back();
                pos0.pop_back();
            }
            pos1.push_back(newpos);
        }
        else{
            if (!pos1.empty()){
                newpos = pos1.back();
                pos1.pop_back();
            }
            pos0.push_back(newpos);
        }
        ans[i]=newpos;
    }
    cout<<pos0.size()+pos1.size()<<"\n";
    for (int i=0; i<ans.size(); i++)cout<<ans[i]<<" "; cout<<"\n";
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