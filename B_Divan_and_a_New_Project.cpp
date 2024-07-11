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
    vector<pair<ll,ll> >a(n),b;
    for(int i=0;i<n;i++)
    {
        cin>>a[i].first;
        a[i].second=i;
    }
    b=a;
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    vector<ll>v(n,0);
    ll no=1;
    v[a[0].second]=no;
    for(int i=1;i<n;i++)
    {
        if(v[a[i-1].second]==no) 
        {
            v[a[i].second]=-no;
            no++;
        }
        else v[a[i].second]=no;
    }
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=(2*abs(0-v[i]))*b[i].first;
    }
    cout<<sum<<endl;
    cout<<"0"<<" ";
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
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