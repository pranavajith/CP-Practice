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
    ll a,b;
    cin>>a>>b;
    ll w = 1;
    bool check = true;
    for (int i=0; i<b; i++) {
        w *= 2;
        if (w>a){
            check = false;
            break;
        }
    }
    if (check) {
        cout<<(ll)pow(2,b)<<"\n";
    }
    else {
        cout<<a+1<<"\n";
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