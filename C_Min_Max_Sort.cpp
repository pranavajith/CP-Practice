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
    map <ll,ll> m; vector <ll> v;
    for (int i=0; i<n; i++){
        cin>>a;
        m[a] = i+1;
        v.push_back(a);
    }
    if (is_sorted(v.begin(),v.end())){
        cout<<0<<"\n";
        return;
    }
    ll ans = n/2;
    if (n%2){
        if (m[(n+1)/2] < m[n/2] || m[(n+1)/2] > m[n+1 - n/2 ]){
            cout<<ans<<"\n";
            return;
        }
        else ans--;
    }
    // cout<<"lol"; 
    bool check = true;
    for (int i=n/2; i>=1; i--){
        // cout<<i<<" "<<"lol\n";
        if (n%2 && check){
            // i--;
            check = false;
            // cout<<i<<" "<<"lol\n";
            continue;
        }
        // if (m[i] > m[n-i+1])break;
        if ((m[i+1] > m[i]) && (m[n-i] < m[n-i+1])) ans--;
        else {
            // cout<<"ok";
            break;
        }
        // cout<<i<<" ";
    }
    cout<<ans<<"\n";
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