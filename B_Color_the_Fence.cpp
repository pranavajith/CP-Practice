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
    ll x;
    cin>>x;
    vector <ll> cost(10); cost[0] = INT_MAX;
    for (int i=1; i<10; i++) cin>>cost[i];
    // cout<<"lol : "<<*min_element(cost.begin(), cost.end())<<" "<<x<<"\n";
    if (*min_element(cost.begin(), cost.end()) > x){
        cout<<-1<<"\n";
        return;
    }
    vector <pair <ll,ll> > v;
    for (int i=9; i>0; i--){
        if (cost[i] != -1) {
            v.push_back(make_pair(i, cost[i]));
            for (int j=i-1; j>0; j--){
                if (cost[j] >= cost[i]) cost[j] = -1;
            }
        }
    }
    // reverse(v.begin(), v.end());
    // for (auto d:v) cout<<d.first<<" "<<d.second<<"\n";
    ll siz = x / v[v.size()-1].second;
    x %= v[v.size()-1].second;
    for (int i=0; i<v.size(); i++){
        v[i].second -= v[v.size()-1].second;
    }
    ll final1 = v[v.size()-1].first; 
    v.pop_back();
    
    // reverse(v.begin(), v.end());
    // ll siz = v.size();
    // cout<<siz<<"\n";
    // vector <ll> ans(siz, final1);
    // cout<<x<<"\n"; 
    // ll iter = 0, viter = 0;
    ll used = 0;
    for (int i=0; i<v.size(); i++){
        // if (x<v[i].second) break;
        used += x/v[i].second;
        string temp (x/v[i].second, v[i].first + '0');
        cout<<temp;
        x %= v[i].second;
    }
    string temp (siz - used, final1 + '0');
    cout<<temp<<"\n";
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