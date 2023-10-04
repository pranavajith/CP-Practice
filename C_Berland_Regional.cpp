#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <algorithm>
#include <limits>
#include <iomanip>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n;
    cin>>n;
    vector <ll> v(n);
    for (int i=0; i<n;i++)cin>>v[i];

    vector < vector <ll> > bst(n);
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;

        bst[v[i]-1].push_back(a);
    }

    for (int i=0;i<n;i++)sort(bst[i].begin(), bst[i].end(), greater<int>());
    vector<vector<long long> > pr(n, vector<long long>(1, 0));
    for (int i=0;i<n;i++){
        for (auto x : bst[i])pr[i].push_back(pr[i].back()+x);
    }
    vector<long long> ans(n);
    for (int i=0;i<n;i++){
        for (int k=1; k<=n ; k++){
            ans[k-1]+=pr[i][bst[i].size()/k * k];
        }
    }
    for (auto d:ans)cout<<d<<" ";
    cout<<"\n";
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