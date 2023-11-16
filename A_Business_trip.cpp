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
    ll k; cin>>k; vector <ll> v(12);
    for (int i=0; i<12; i++) cin>>v[i];
    sort(v.rbegin(), v.rend()); 
    ll counter = 0, sum1 = 0;
    while (sum1 < k && counter < 12){
        sum1+=v[counter]; counter++; 
    }
    if (sum1 >= k) cout<<counter<<"\n";
    else cout<<-1<<"\n";
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