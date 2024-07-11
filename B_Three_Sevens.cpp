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
    int n;cin>>n;
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        while(x--)
        {
            int a;cin>>a;
            mp[a]=i;
        }
    }
    map<int,int> ans;
    for(auto it : mp)
    {
        ans[it.second] = it.first;
    }   
    vector<int> v;
    for(auto it : ans)
    {
        v.push_back(it.second);
    }
 
    if(v.size()!=n)
    cout<<-1<<"\n";
    else
    {
        for(auto it : v)
        cout<<it<<" ";
        cout<<"\n";
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