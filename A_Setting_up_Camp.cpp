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
    ll a,b,c;
    cin>>a>>b>>c;
    if ((b%3==1 && c<2) || (b%3==2 && c<1)) cout<<-1<<"\n";
    else {
        ll ans = a;
        ans += b/3;
        if (b%3 == 1) {
            ans++, c-=2;
        }
        else if (b%3 == 2){
            ans++, c--;
        }
        ans += c/3; 
        if (c%3) ans++;
        cout<<ans<<"\n";
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