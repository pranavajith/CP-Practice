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
    ll n; cin>>n; ll a,b;
    map <ll,ll> m;
    while (n--) {
        cin>>a>>b;
        if (a==1) m[b]++;
        else {
            map <ll,ll> m1;
            m1 = m;
            bool check = true;
            for (int i=0; i<=30; i++) {
                if ((b>>i) & 1) {
                    if (!m1[i]) {
                        cout<<"NO\n";
                        check = false;
                        break;
                    }
                    m1[i]--;
                }
                m1[i+1]+=m1[i]/2;
            }
            if (check) cout<<"YES\n";
        }
    }
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