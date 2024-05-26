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
    ll chest = 0, bicep = 0, back = 0;
    for (int i=0; i<n; i++){
        if (i%3==0) chest += v[i];
        else if (i%3==1) bicep += v[i];
        else back += v[i];
    }
    if (bicep > max(back, chest)) cout<<"biceps";
    else if (back > max(bicep, chest)) cout<<"back"<<"\n";
    else cout<<"chest";
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