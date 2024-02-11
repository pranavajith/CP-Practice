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


ll f(int x, vector <ll> &pref) {
    // if (pref.size() == 0) return 0;
    if (x < pref.size()) {
        return pref[pref.size()-1-x] - (pref.back() - pref[pref.size()-1-x]);
    }
    return pref.back() * (-1);
}


void solve(){
    ll n,k,x;
    cin>>n>>k>>x;
    vector <ll> v(n);
    for (int i=0; i<n; i++) {
        cin>>v[i];
    }
    // v.push_back(0);
    sort(v.begin(), v.end());
    // ll sum1 = 0;
    // ll ans = f(x, v);
    vector <ll> pref(n,0);
    for (int i=0; i<n; i++) {
        if (i==0) pref[0] = v[0];
        else pref[i] = pref[i-1] + v[i];
    }
    pref.insert(pref.begin(), 0);
    ll ans = f(x, pref);
    // if (k==n) ans = max(ans, 0LL);
    while (k--) {
        pref.pop_back();
        ans = max(ans, f(x, pref));
    }
    // if (pref.size() == 0) ans = max(ans, 0LL);
    ans = max(ans, f(x, pref));
    cout<<ans<<"\n";

    // // if (x>k) {
    // //     while (k--) v.pop_back();
    // //     cout<<accumulate(v.begin(), v.end(), 0LL) * (-1)<<"\n";
    // //     return;
    // // }
    // int sum1 = accumulate(v.begin(), v.end(), 0LL), xsum = 0;
    // while (x--) {
    //     xsum += v.back();

    // }   
    // vector <ll> pref(2, 0);
    // for (int i=0; i<n; i++) pref.push_back(pref.back() + v[i]);
    

    // for (auto d:pref) cout<<d<<" "; cout<<"\n";
    // n+=2;
    // ll enditer = n-k-1, max1 = -1, numlol = 0; cout<<enditer<< " !\n";
    // while (k-- && enditer != -1) {
    //     max1 = max(max1, pref[enditer] - (pref[n-1-numlol] - pref[enditer])); numlol++;
    // }
    // cout<<max1<<"\n";
    // vector <ll> pref; pref.push_back(0);
    // for (int i=0; i<n; i++) pref.push_back(pref.back() + v[i]);
    // n++;
    // // for (auto d:pref) cout<<d<<" "; cout<<"\n\n";
    // ll iter = n-1-x;
    // // cout<<"lol2 "<<pref[iter]<<" "<<pref.back()<<" "<<x<<" "<<n<<"\n";
    // ll ans = pref[iter] - (pref.back() - pref[iter]); 
    // if (k==n+1) ans = max(0LL, ans);
    // // cout<<"lol "<<ans<<" "<<iter<<"\n";
    // // cout<<ans<<"!\n";
    // while (iter!=-1 && k--) {
    //     // cout<<"ok!";
    //     ans = max(ans, pref[iter] - (pref.back() - pref[iter]));
    //     iter--; pref.pop_back();

    // }
    // // cout<<ans<<"\n";
    // if (iter == -1) {
    //     ll sum12 = accumulate(v.begin(), v.end(), 0LL);
    //     while (k-- && v.size()) {
    //         // cout<<"ok2\n";
    //         sum12 -= v.back();
    //         ans = max(ans, sum12 * (-1));
            
    //         v.pop_back();
    //     }
    // }
    // cout<<ans<<"\n";
    // // int iter = n-1-x;
    // // ll ans = pref[iter] - (pref[n-1] - pref[iter]), incr = 0;
    // // while (k-- && iter != -1) {
    // //     pref.pop_back();
    // //     ans = max(ans, pref[iter] - (pref.back() - pref[iter]));
    // //     iter--;
    // //     // pref.pop_back();
    // // }
    // // if (iter == -1) {
    // //     while (k--) {
    // //         ans = max(ans, (-1) * pref.back()); pref.pop_back();
    // //     }
    // // }
    // // cout<<ans<<"\n";
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