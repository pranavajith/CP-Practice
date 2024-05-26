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
    for (int i=0; i<n; i++) cin>>v[i]; 
    vector <ll> leftMex(n, 0), rightMex(n, 0);
    map <ll,ll> m; ll left = 0;
    for (int i=0; i<n; i++){
        m[v[i]]++;
        while (m[left]) left++;
        leftMex[i] = left;
    }
    m.clear(); left = 0;
    for (int i=n-1; i>=0; i--){
        m[v[i]]++;
        while (m[left]) left++;
        rightMex[i] = left;
    }
    for (int i=0; i<n-1; i++){
        if (leftMex[i] == rightMex[i+1]) {
            cout<<2<<"\n"<<1<<" "<<i+1<<"\n"<<i+2<<" "<<n<<"\n"; return;
        }
    }
    cout<<-1<<"\n";
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