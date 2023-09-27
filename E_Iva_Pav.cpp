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
    vector <ll> v(n);
    for (int i=0;i<n;i++)cin>>v[i];
    // map <ll, vector <ll> > m;
    // // v.push_back(0);
    // for (int i=0;i<n;i++){
    //     vector <ll> temp;
    //     ll a = v[i];
    //     // cout<<" ! "<<a<<" ";
    //     // temp.push_back(v[i]);
    //     for (int j=i;j<n;j++){
    //         a&=v[j];
    //         if (a==0){
    //             // temp.push_back(0);
    //             break;
    //         }
    //         temp.push_back(a);
    //         // cout<<a<<" ";
    //     }
    //     m[i+1]=temp;
    // }

    // for (auto d:m){
    //     cout<<d.first<<" : ";
    //     for (auto c:d.second)cout<<c<<" ";cout<<"\n";
    // }
    vector<int> rightmost(n);

    for (int i = n - 1; i >= 0; i--) {
        if (i == n - 1 || (v[i] & rightmost[i + 1]) == 0) {
            rightmost[i] = i + 1;
        } else {
            rightmost[i] = rightmost[i + 1];
        }
    }


    ll q;
    cin>>q;
    while (q--){
        ll a, k;
        cin >> a >> k;
        if (k > v[a - 1]) {
            cout << -1 << " ";
            continue;
        }
        if (a == n) {
            cout << n << " ";
            continue;
        }

        if ((v[a - 1] & rightmost[a]) < k) {
            cout << rightmost[a] << " ";
        } else {
            cout << a << " ";
        }
   
    }
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