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
    if (n==2){
        cout<<"! "<<0<<" "<<1<<"\n";
        cout.flush();
        return;
    }
    ll IndexOfN = 0;
    for (int i=1; i<n; i++){
        cout<<"? "<<IndexOfN<<" "<<IndexOfN<<" "<<i<<" "<<i<<"\n";
        cout.flush();
        char c; cin>>c;
        if (c == '<') IndexOfN = i;
    }
    // ll maxPow = 0;
    // for (int i=31; i>=0; i--){
    //     if ((n>>i) & 1) {
    //         maxPow = i+1; break;
    //     }
    // }
    // ll bigLol = (1<<(maxPow))-1;
    // cout<<maxPow<<" "<<bigLol<<"\n";
    vector <ll> ans;
    ll curmaxTillNow = IndexOfN;
    for (int i=0; i<n; i++){
        if (i==IndexOfN) continue;
        cout<<"? "<<IndexOfN<<" "<<curmaxTillNow<<" "<<IndexOfN<<" "<<i<<"\n";
        cout.flush();
        char c; cin>>c;
        if (c == '<') {
            ans.clear(); ans.push_back(i);
            curmaxTillNow = i;
        }
        else if (c == '=') ans.push_back(i);
    }
    // ll minTillNow = ans 
    if (ans.size() == 1) {
        cout<<"! "<<ans[0]<<" "<<IndexOfN<<"\n";
        cout.flush();
        return;
    }
    ll minTIllNow = ans[0];
    for (int i=1; i<ans.size(); i++){
        cout<<"? "<<minTIllNow<<" "<<minTIllNow<<" "<<ans[i]<<" "<<ans[i]<<"\n";
        cout.flush();
        char c;
        cin>>c;
        if (c == '>') minTIllNow = ans[i];
    }
    cout<<"! "<<IndexOfN<<" "<<minTIllNow<<"\n";
    cout.flush();

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