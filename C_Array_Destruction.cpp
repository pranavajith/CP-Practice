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
    ll n,a;
    cin>>n;
    vector <ll> v(2*n);
    // multiset <ll> s;
    for (int i=0; i<2*n; i++) {
        // cin>>a;
        // s.insert(a);
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    // cout<<*(v.end()-1)<<"here it is!";
    // for (auto d:v) cout<<d<<" ";
    // bool check = true;
    if (n==1) {
        cout<<"YES\n";
        cout<<v[0] + v[1]<<"\n"<<v[0]<<" "<<v[1]<<"\n";
        return;
    }


    for (int i=0; i<2*n-1; i++) {
        // bool check1 = true;
        vector <ll> temp (v.begin(), v.end());
        vector <pair <ll,ll> > ans;
        ans.push_back(make_pair(temp.back(), temp[i]));
        ll mainx = temp.back() + temp[i];
        ll x = temp.back();
        temp.pop_back();
        temp.erase(temp.begin() + i);
        // for (auto d:temp) cout<<d<<" "; cout<<"\n\n";
        ll curlas = temp.back(); temp.pop_back();
        // cout<<x<<" "<<curlas<<"\n";
        // for (auto d:temp) cout<<d<<" "; cout<<"\n\n";
        // cout<<i<<" ";
        while (!temp.empty() && find(temp.begin(), temp.end(), x - curlas) != temp.end()) {
            if (temp.empty())break;
            // cout<<"ok ";
            ans.push_back(make_pair(curlas, x - curlas));
            temp.erase(lower_bound(temp.begin(), temp.end(), x - curlas));
            x = curlas;
            if (temp.empty())break;
            curlas = temp.back();
            temp.pop_back();
            // cout<<x<<" ";
        }
        // cout<<"\n";
        if (temp.empty()){
            cout<<"YES\n"<<mainx<<"\n";
            for (auto d:ans) cout<<d.first<<" "<<d.second<<"\n";
            return;
        }
    }
    cout<<"NO\n";
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