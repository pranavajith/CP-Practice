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
    ll n,m,k;
    cin>>n>>m>>k;
    vector <ll> v1(n), v2(m);
    for (int i=0; i<n; i++) cin>>v1[i];
    for (int i=0; i<m; i++) cin>>v2[i];
    sort(v1.rbegin(), v1.rend());
    sort(v2.rbegin(), v2.rend());
    if (v1.size() < k/2 || v2.size() < k/2) {
        cout<<"NO\n";
        return;
    }
    ll cnt1 = 0, cnt2 = 0, curel = 1, both = 0;
    while (curel <= k) {
        // if (cnt1 == )
        if (cnt1 == k/2 || v1.empty()) {
            // if (v1.empty() && cnt1 == k/2){
            //     cout<<"NO\n";
            //     return;
            // } 
            if (v2.size() == 0 || v2.back() != curel) {
                cout<<"NO\n";
                return;
            }
            else {
                while (v2.size() && v2.back() == curel) v2.pop_back();
                cnt2++;
            }
        }
        else if (cnt2 == k/2 || v2.empty()) {
            // if (cnt2 == k/2 && v2.empty())
            if (v1.size() == 0 || v1.back() != curel) {
                cout<<"NO\n";
                return;
            }
            else {
                while (v1.size() && v1.back() == curel) v1.pop_back();
                cnt1++;
            }
        }
        else {
            if (v1.back() == curel && v2.back() == curel) {
                both++;
                while (v1.size() && v1.back() == curel) v1.pop_back();
                while (v2.size() && v2.back() == curel) v2.pop_back();
            }
            else if (v1.back() == curel) {
                cnt1++;
                while (v1.size() && v1.back() == curel) v1.pop_back();
            }
            else if (v2.back() == curel) {
                cnt2++;
                while (v2.size() && v2.back() == curel) v2.pop_back();
            }
            else {
                cout<<"NO\n";
                return;
            }
        }
        curel++;
    }
    // cout<<k<<" "<<cnt1<<" "<<cnt2<<" "<<both<<"\n";
    if (cnt1 > k/2 || cnt2 > k/2 || (k - (cnt1 + cnt2)) > both) cout<<"NO\n";
    else cout<<"YES\n";


    // while (k-- && cnt1 < k/2 && cnt2 < k/2 && liter < n && riter < m) {
    //     if (cnt1 == k/2) {
    //         if (riter == m || )
    //     }
    // }
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