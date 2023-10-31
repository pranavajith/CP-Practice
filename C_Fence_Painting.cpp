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
    vector <ll> prevcol(n), newcol(n), painter(m), neededpaint;
    for (int i=0; i<n; i++) cin>>prevcol[i];
    for (int i=0; i<n; i++) cin>>newcol[i];
    map <ll,ll> paintercount;
    for (int i=0; i<m; i++){
         cin>>painter[i];
        paintercount[painter[i]]++;
    }
    if (count(newcol.begin(), newcol.end(), painter[m-1]) == 0){
        cout<<"NO\n";
        return;
    }
    for (int i=0; i<)
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