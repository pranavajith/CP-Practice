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
    ll n,m;
    cin>>n>>m;
    vector <ll> p;
    p.push_back(1);
    for (int i=1; i<62; i++){
        p.push_back(p.back()*2);
    }
    ll MaxOfM = 63, MaxOfN = 63;
    for (int i=62; i>=0; i--) {
        if ((m>>i) & 1) {
            MaxOfM = i; break;
        }
    }
    for (int i=62; i>=0; i--) {
        if ((n>>i) & 1) {
            MaxOfN = i; break;
        }
    }
    if ((n & p[MaxOfM])) cout<<1<<"\n"<<n<<" "<<m<<"\n";
    else if (n > (p[MaxOfM]+p[MaxOfN])) cout<<2<<"\n"<<n<<" "<<(n ^ (p[MaxOfM]+p[MaxOfN]))<<" "<<m<<"\n";
    else cout<<-1<<"\n";
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