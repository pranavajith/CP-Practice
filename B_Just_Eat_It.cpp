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
    ll n;
    cin>>n;
    vector <ll> v(n);
    for (int i=0; i<n; i++){
        cin>>v[i];
        // if (i==0)pref[i] = v[i];
        // else pref[i] = pref[i-1] + v[i];
    }
    ll totsum = accumulate(v.begin(), v.end(), 0LL);
    // cout<<totsum<<"\n";
    bool check = true;
    ll curmax = 0, totmax = 0;
    for (int i=0; i<n; i++){
        if (totmax >= totsum){
            cout<<"NO\n";
            return;
        }
        curmax+=v[i];
        if (curmax <= 0) {
            curmax = 0;
            check = false;
        }
        totmax = max(totmax, curmax);
        // if (check == false)  cout<<"ok";
    }
    // cout<<totmax<<" "<<totsum<<"\n";
    if (totmax >= totsum && !check){
            cout<<"NO\n";
            return;
        }
    cout<<"YES\n";

    // for (int i=0; i<n; i++){
    //     if (v[i]<0){
    //         if ((i!=0 && pref[i-1]>=totsum) || (i!=n-1 && (pref[i+1]-pref[i])>=totsum)){
    //             check = false;
    //             break;
    //         }
    //     }
    // }
    // if (check) cout<<"YES\n";
    // else cout<<"NO\n";
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