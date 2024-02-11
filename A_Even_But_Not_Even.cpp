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
    string s;
    cin>>n>>s;
    ll cnt0 = count(s.begin(), s.end(), '0');
    ll cnt2 = count(s.begin(), s.end(), '2');
    ll cnt4 = count(s.begin(), s.end(), '4');
    ll cnt6 = count(s.begin(), s.end(), '6');
    ll cnt8 = count(s.begin(), s.end(), '8');
    if ((cnt0 + cnt2 + cnt4 + cnt6 + cnt8 == n) || (cnt0 + cnt2 + cnt4 + cnt6 + cnt8 == n-1)) {
        cout<<-1<<"\n";
        return;
    }
    char c; bool check = false;
    for (int i=0; i<n; i++) {
        if ((s[i]-'0') % 2) {
            if (!check){
                check = true;
                c = s[i];
            }
            else {
                cout<<c<<s[i]<<"\n";return;
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