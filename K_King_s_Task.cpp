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

void f1(vector <ll> &v){
    ll n = v.size();
    for (int i=0; i<n; i+=2){
        ll temp = v[i]; v[i] = v[i+1]; v[i+1] = temp;
    }
    // return v;
}

void f2(vector <ll> &v){
    ll n = v.size()/2;
    for (int i=0; i<n; i++){
        ll temp = v[i];
        v[i] = v[i+n]; v[i+n] = temp;
    }
}

ll check1(vector <ll> v, vector <ll> v1, ll round){
    if (round > 1e4) return -1;
    f1(v);
    // if (round == 0) {for (auto d:v) cout<<d<<" "; cout<<"\n";}
    if (v==v1) return round+1;
    f2(v);
    //  if (round == 0) {for (auto d:v) cout<<d<<" "; cout<<"\n";}
    if (v==v1) return round+2;
    return check1(v, v1, round+2);
}
ll check2(vector <ll> v, vector <ll> v1, ll round){
    if (round > 1e4) return -1;
    f2(v);
    if (v==v1) return round+1;
    f1(v);
    if (v==v1) return round+2;
    return check2(v, v1, round+2);
}


void solve(){
    ll n;
    cin>>n;
    vector <ll> v(2*n);
    for (int i=0; i<2*n; i++) cin>>v[i]; 
    vector <ll> v1(2*n);
    for (int i=0; i<2*n; i++) v1[i] = i+1;
    if (v1 == v){
        cout<<0<<"\n";
        return;
    }
    ll a = check1(v, v1, 0), b = check2(v, v1, 0);
    if (a==b && a==-1) cout<<-1<<"\n";
    else if (a==-1) cout<<b<<"\n";
    else if (b==-1) cout<<a<<"\n";
    else cout<<min(a,b)<<"\n";
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