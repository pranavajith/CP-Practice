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
    vector <ll> al(n), bob(n);
    for (int i=0; i<n; i++)cin>>al[i];
    for (int i=0; i<n; i++)cin>>bob[i];
    vector <vector <ll> > v;
    for (int i=0; i<n; i++){
        vector <ll> temp;
        temp.push_back(al[i] + bob[i]);
        temp.push_back(al[i]);
        temp.push_back(bob[i]);
        v.push_back(temp);
    }
    sort(v.rbegin(), v.rend());
    ll finalice = 0, finbob = 0;
    for (int i=0; i<n; i++){
        if (i%2==0) finalice += v[i][1]-1;
        else finbob += v[i][2]-1;
        // cout<<i<<" "<<finalice<<" "<<finbob<<"\n";
    }
    cout<<finalice - finbob<<"\n";
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