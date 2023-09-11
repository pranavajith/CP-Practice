#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
using namespace std;
#define ll long long

int is_arithmetic_progression(vector<ll> positions) {
    if (positions.size() <= 1) {
        return 1; // Single or no occurrence, automatically an AP
    }

    ll common_diff = positions[1] - positions[0];
    for (int i = 1; i < positions.size() - 1; i++) {
        if (positions[i + 1] - positions[i] != common_diff) {
            return 0;
        }
    }
    return 1;
}

void solve() {
    // ll n;
    // cin >> n;
    // unordered_map<ll, vector<ll>> m;
    // for (int i = 0; i < n; i++) {
    //     ll a;
    //     cin >> a;
    //     m[a].push_back(i);
    // }

    // vector<pair<ll, ll>> result;
    // for (const auto& entry : m) {
    //     const vector<ll>& positions = entry.second;
    //     if (positions.size() == 1 || positions.size() == 2 || (positions[1] - positions[0] == positions[2] - positions[1])) {
    //         result.push_back(make_pair(entry.first, (positions.size() == 1) ? 0 : positions[1] - positions[0]));
    //     }
    // }

    // cout << result.size() << endl;
    // for (const auto& p : result) {
    //     cout << p.first << " " << p.second << endl;
    // }

    // SECOND EDIT

    //  vector<pair<ll, ll>> result;
    // for (const auto& entry : m) {
    //     const vector<ll>& positions = entry.second;
    //     if (is_arithmetic_progression(positions)) {
    //         result.push_back(make_pair(entry.first, (positions.size() == 1) ? 0 : positions[1] - positions[0]));
    //     }
    // }

    ll n;
    cin>>n;
    map <ll, vector <ll> > m;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        m[a].push_back(i);
    }
    
    vector < pair <ll,ll> > result;
    auto it = m.begin();
    while(it!=m.end()){
        vector <ll> positions = it->second;
        if (is_arithmetic_progression(positions)){
            pair <ll,ll> p;
            if (positions.size()>1){
                p.first = it->first;
                p.second = positions[1]-positions[0];
            }
            else{
                p.first = it->first;
                p.second = 0;
            }
            result.push_back(p);
        }
        it++;
    }
    cout<<result.size()<<endl;
    for (int i=0;i<result.size();i++){
        ll a = (result[i].second);
        if (a<0){
            a=0;
        }
        cout<<result[i].first<<" "<<a<<endl;
    }
}

int main() {
    solve();
    return 0;
}
