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
    ll n,x;
    cin>>n>>x;
    ll a,b, maxa = -1, maxhealth = -1;
    for (int i=0; i<n; i++){
        cin>>a>>b;
        maxa = max(maxa,a);
        maxhealth = max(maxhealth, a-b);
    }
    if (maxa >= x) cout<<1<<"\n";
    else if (maxhealth <=0) cout<<-1<<"\n";
    else {
        if ((x - maxa) % maxhealth == 0){
            cout<<(x-maxa)/maxhealth + 1<<"\n";
        }
        else if (x % maxhealth == 0) cout<<min(x/maxhealth, (x-maxa)/maxhealth + 2)<<"\n";
        else cout<<min(x/maxhealth + 1, (x-maxa)/maxhealth + 2)<<"\n";
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