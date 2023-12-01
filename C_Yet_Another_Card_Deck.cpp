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
    ll n,q,a;
    cin>>n>>q;
    ll minel = 0;
    map <ll,bool> m;
    // set <pair <ll,ll> > s;
    vector <pair <ll,ll> > v;
    pair <ll,ll> p;
    for (int i=0; i<n; i++){
        cin>>a;
        if (!m[a]){
            m[a]=true;
            p.first = a;
            p.second = i;
            v.push_back(p);
        }
    }
    for (int i=0; i<q; i++){
        cin>>a;
        for (auto j=v.begin(); j!=v.end(); j++){
            if ((*j).first == a){
                cout<<(*j).second+1<<" ";
                v.erase(j);
                p.first = a;
                p.second = 0;
                v.insert(v.begin(), p);
                break;
            }
            else{
                (*j).second++;
            }
        }
    }
    // for (int i=0; i<n; i++){
    //     cin>>a;
    //     if (!m[a]){
    //         m[a]= true;
    //         p.first = i;
    //         p.second = a;
    //         s.insert(p);
    //     }
    // }
    // for (int i=0; i<q; i++){
    //     cin>>a;
    //     for (auto d:s){
    //         if (d.second != a){
    //             p.first = d.first+1;
    //             p.second = d.second;
    //             s.erase(d);
    //             s.insert(p);
    //         }
    //         else{
    //             cout<<d.second+1<<" ";
    //             s.erase(d);
    //             p.first = 0;
    //             p.second = a;
    //             s.insert(p);
    //             break;
    //         }
    //     }
    // }
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