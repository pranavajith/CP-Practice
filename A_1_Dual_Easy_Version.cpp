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
typedef vector<int> vi;
typedef pair<int,int> pi;
#define all(x) (x).begin(),(x).end()
#define rall(x) x.rbegin(),x.rend()
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define endl "\n"
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define rep(i,a,b) for (ll i = a; i < b; i++)
#define rev(i,a,b) for(ll i=a;i>=b;i--)
#define rev_sort(x) sort(all(x),greater<ll>())
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    ll pos=0,neg=0;
    rep(i,0,n){
        cin>>a[i];
    }
    ll mx=*max_element(all(a));
    ll j=-1;
    rep(i,0,n){
        if(a[i]==mx){
            j=i;
        }
    }
    if(a[j]<=0){
        cout<<n-1<<endl;
        rev(i,n-2,0){
            cout<<i+1<<" "<<i+2<<endl;
        }
    }
    else{
        vector<pair<ll,ll> > ans;
        while(a[j]<20){
            ans.pb(make_pair(j+1,j+1));
            a[j]*=2;
        }
        rep(i,0,n){
            if(a[i]<0){
                ans.pb(make_pair(i+1,j+1));
            }
        }
        rep(i,1,n){
            ans.pb(make_pair(i+1,i));
        }
        cout<<ans.size()<<endl;
        for(auto i:ans){
            cout<<i.ff<<" "<<i.ss<<endl;
        }
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