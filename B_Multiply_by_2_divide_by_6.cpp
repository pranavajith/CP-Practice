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
    ll n, count3 = 0, count2 = 0;
    cin>>n;
    while (n%3==0){
        count3++; n/=3;
    }
    while (n%2==0){
        count2++; n/=2;
    }
    if (n!=1 || count2 > count3){
        cout<<-1<<"\n"; return;
    }
    cout<<count3 + (count3-count2)<<"\n";
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