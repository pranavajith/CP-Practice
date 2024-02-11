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

// // bool f(ll ind, ll req, vector <ll> &v) {
// //     if (req == 0) return true;
// //     if (req < 0) return false;
// //     if (ind == v.size()) return false;
// //     return (f(ind+1, req, v) | f(ind+1, req - v[ind], v));
// // }

// // bool check(ll req, vector <ll> &v) {
// //     return !f(0, req, v);
// // }

// // void order()

// const ll maxW = 100000;
// bitset <maxW> b;


// void solve(){
//     ll n;
//     cin>>n;
//     vector <ll> v(n);
//     for (int i=0; i<n; i++) cin>>v[i];
//     // sort(v.begin(), v.end());
//     b[0] = true;
//     ll totsum = accumulate(v.begin(), v.end(), 0LL);
//     for (int i=0; i<n; i++) {
//         // v[i] = x;
//         ll x = v[i];
//         b |= (b<<x);
//     }
//     for (int i=1; i<totsum+1; i++) {
//         if (!b[i]){
//             cout<<i<<"\n";
//             return;
//         }
//     }
//     cout<<totsum+1<<"\n";
// }

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     // TxtIO;
//     // ll t; cin>>t; while(t--)
//         solve();
//     return 0;
// }


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
// ll mod = 1e9 + 7;
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

// bool f(ll ind, ll req, vector <ll> &v) {
//     if (req == 0) return true;
//     if (req < 0) return false;
//     if (ind == v.size()) return false;
//     return (f(ind+1, req, v) | f(ind+1, req - v[ind], v));
// }

// bool check(ll req, vector <ll> &v) {
//     return !f(0, req, v);
// }

// void order()

const ll maxW = 10000000;
bitset <maxW> b;


void solve(){
    ll n;
    cin>>n;
    vector <ll> v(n);
    for (int i=0; i<n; i++) cin>>v[i];
    // sort(v.begin(), v.end());
    b[0] = true;
    ll totsum = accumulate(v.begin(), v.end(), 0LL);
    for (int i=0; i<n; i++) {
        // v[i] = x;
        ll x = v[i];
        b |= (b<<x);
    }
    for (int i=1; i<totsum+1; i++) {
        if (!b[i]){
            cout<<i<<"\n";
            return;
        }
    }
    cout<<totsum+1<<"\n";
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