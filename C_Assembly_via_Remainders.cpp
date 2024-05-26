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
    int n;
        cin >> n;
        vector<int>v(n-1, 0);
        vector<long long >store(n, 0);
 
        for(int i=0;i<n-1;++i)
        {
         cin>>v[i];
        }
        store[0]=10000;
 
        for(int i=1;i<n;++i)
        {
            store[i]=store[i-1]+v[i-1];
        }
        for(auto value:store)
        {
            cout<<value<<" ";
        }
        cout<<endl;
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