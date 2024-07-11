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
    vector<pair<ll, ll> > vc;
    vector<ll>vx,vy;
    vector<pair<int,int> >  v2;
    ll a,b,n,c,d,maxi,ans=0,t,x,y,k,m,total=0,count=0,result=0,mx=0;
    //string str="", strr="";
    set<ll> s,ss,s1,s2;
 
 
    ll sum=0;
    vector<int> v,aa,bb;
 
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        aa.push_back(x);
    }
    for(int i=0; i<n; i++)
    {
        cin >> x;
        bb.push_back(x);
    }
    if(aa == bb )
    {
        cout << "YES" <<endl;
        return;
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            if(aa[i]>bb[i])
            {
                cout << "NO" << endl;
                return;
            }
            if(aa[i]<bb[i])
            {
                s.insert(bb[i]-aa[i]);
                v.push_back(i);
            }
        }
        for(int i=0; i<v.size()-1; i++)
        {
            if(v[i+1]-v[i]>1)
            {
                cout << "NO" << endl;
                return;
            }
        }
        if(s.size()==1)
            cout << "YES" <<endl;
        else cout << "NO" << endl;
}}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    ll t; cin>>t; while(t--)
        solve();
    return 0;
}