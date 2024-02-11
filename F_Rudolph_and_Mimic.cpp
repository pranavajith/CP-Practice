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
    // vector <ll> v(n);
    map <ll,ll> m1,m2,m3;
    for (int i=0; i<n; i++) {
        cin>>a;
        m1[a]++;
    }
    cout<<"- 0\n";
    cout.flush();
    vector <ll> v(n);
    for (int i=0; i<n; i++) {
        cin>>a;
        m2[a]++;
        v[i] = a;
    }
    bool check = false; ll lol = -1;
    for (auto d:m2) {
        if (m1[d.first] < d.second) {
            check = true;
            lol = d.first;
            break;
        }
    }
    if (!check) {
        for (auto d:m2) m2[d.first] = 0;
        cout<<"- 0\n";
        cout.flush();
        for (int i=0; i<n; i++) {
            cin>>a;
            m2[a]++;
            v[i] = a;
        }
        for (auto d:m2) {
            if (d.second > m1[d.first]){
                lol = d.first;
                break;
            }
        }
    }
    cout<<"- "<<n-m2[lol]<<" ";
    for (int i=0; i<n; i++) {
        if (v[i] != lol) cout<<i+1<<" ";
    }
    cout<<"\n";
    cout.flush();
    bool check1 = true; ll ans = 0;
    vector <ll> v1(m2[lol]);
    for (int i=0; i<m2[lol]; i++) {
        cin>>v1[i];
        if (v1[i] != lol) {
            // cout<<"! "<<i+1<<"\n";
            ans = i+1;
            check1 = false;
            // cout.flush();
        }
    }
    if (!check1) {
        cout<<"! "<<ans<<"\n";
        cout.flush();
    }
    else {
        bool check2 = true;
        cout<<"- 0\n";
        cout.flush();
        for (int i=0; i<m2[lol]; i++) {
            cin>>v1[i];
            if (v1[i] != lol) {
                ans = i+1;
                // cout.flush();
                check2 = false;
            }
        }
        if (!check2) {
            cout<<"! "<<ans<<"\n";
            cout.flush();
        }
        else {
            cout<<"- 0\n";
            cout.flush();
            for (int i=0; i<m2[lol]; i++) {
                cin>>v[i];
                if (v[i]!= lol) {
                    cout<<"! "<<i+1<<"\n";
                    cout.flush();
                }
            } 
        }
    }

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