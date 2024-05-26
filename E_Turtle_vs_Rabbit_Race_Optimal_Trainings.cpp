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

double f(ll a, ll b){
    return 1.0 * a * (2*b - a + 1) * 0.5;
}

void solve(){
    ll n;
    cin>>n;
    vector <ll> v(n), pref(n);
    for (int i=0; i<n; i++) cin>>v[i]; 
    pref[0] = v[0];
    for (int i=1; i<n; i++) pref[i] = pref[i-1] + v[i];
    ll q;
    cin>>q;
    // cout<<"ok!\n";
    while (q--){
        ll a,b;
        cin>>a>>b;
        a--;
        ll b1 = b;
        if (a>0) b1 += pref[a-1];
        // b;
        ll ind = upper_bound(pref.begin(), pref.end(), b1) - pref.begin();
        // cout<<ind<<" <-! ";
        if (ind == n) cout<<n<<" ";
        else if (ind == 0) cout<<1<<" ";
        // if ()
        else {
            ll prevInd = ind-1;
            ll sumPrev = pref[prevInd]; if (a>0) sumPrev -= pref[a-1];
            ll sumNon = pref[ind]; if (a>0) sumNon -= pref[a-1];
            // cout<<sumPrev<<" "<<sumNon<<" "<<f(sumPrev, b)<<" "<<f(sumNon, b)<<"\n";
            if (f(sumPrev, b) >= f(sumNon, b)) cout<<max(a+1, prevInd+1)<<" ";
            else cout<<max(a+1, ind+1)<<" ";
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