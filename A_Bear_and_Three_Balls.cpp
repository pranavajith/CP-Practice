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
    ll n,ii=0;
        cin>>n;
        ll a[n+5];
        set<ll>st;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            st.insert(a[i]);
        }
        if(st.size()<=2)
        {
            cout<<"NO\n";
            return;
        }
        ll b[st.size()+19];
        for(auto to:st)
        {
            b[ii]=to;
            ii++;
        }
        bool ok=false;
        for(int i=0;i<st.size()-2;i++)
        {
            if(b[i]==b[i+1]-1 && b[i]==b[i+2]-2)
                ok=true;
        }
        if(ok)
            cout<<"YES\n";
            else
            cout<<"NO\n";
    
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