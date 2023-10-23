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
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

ll count1 = 0;

void pushOne(vector <ll> &s, ll i){
    if (s[i] == 1){
        count1++;
        pushOne(s, i-1);
    }
    if (i==s.size()-1 && s[i] == 0)return;
    if (count1==0)return;
    s[i]=1;
    s[i+1]=0;
}

void solve(){
    count1=0;
    ll count0 = 0;
    ll n; cin>>n;
    vector <ll> s(n); char c;
    for (int i=0; i<n; i++){
        cin>>c;
        s[i] = c-'0';
        if (s[i] == 0)count0++;
    }
    vector <ll> v(n, -1);
    if (count0 > 0){
         v[0] = 0;
         }

    
    for (int i = 0; i<count0; i++){
        count1 = 0;
        pushOne(s, n-1-i);
        if (i==0){
            v[i] = count1;
        }
        else v[i] = v[i-1] + count1;
    }
    for (int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
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