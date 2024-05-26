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
set <ll> s;
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    // cout<<"hi\n";
    ll n; cin>>n;
    if (s.find(n) == s.end()) cout<<"NO\n";
    else cout<<"YES\n";
}

int main() 
{
    // cout<<"hi!!!!!\n";
    vector <ll> v;
    v.push_back(1);
    v.push_back(11);
    v.push_back(10);
    v.push_back(100);
    v.push_back(101);
    v.push_back(110);
    v.push_back(111);
    v.push_back(1000);
    v.push_back(1001);
    v.push_back(1010);
    v.push_back(1100);
    v.push_back(1011);
    v.push_back(1101);
    v.push_back(1110);
    v.push_back(1111);
    v.push_back(10000);
    v.push_back(10001);
    v.push_back(10010);
    v.push_back(10011);
    v.push_back(10100);
    v.push_back(10101);
    v.push_back(10110);
    v.push_back(10111);
    v.push_back(11000);
    v.push_back(11001);
    v.push_back(11010);
    v.push_back(11011);
    v.push_back(11100);
    v.push_back(11101);
    v.push_back(11110);
    v.push_back(11111);
    v.push_back(100000);
    // ll n = 3;
    // cout<<"ok\n";
    map <ll, bool> m;
    for (auto d:v) m[d] = true;
    for (int k=0; k<3; k++){
        // cout<<n<<"! ";
        // cout<<"ok\n";
        for (int i=0; i<v.size(); i++){
            // cout<<"v.size()\n";
            for (int j=0; j<v.size(); j++){
                // cout<<v.size()<<"\n";
                if (v[i] * v[j] < 1e5 && !m[v[i] * v[j]]) {
                    v.push_back(v[i] * v[j]);
                    m[v[i] * v[j]] = true;
                }
            }
            // cout<<v.size()<<"! \n";
        }
    }
    // cout<<"ok!!!\n";
    for (auto d:v) s.insert(d); s.insert(1);
    // for (auto d:s) cout<<d<<" ";
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // TxtIO;
    ll t; cin>>t; while(t--)
        solve();
    return 0;
}