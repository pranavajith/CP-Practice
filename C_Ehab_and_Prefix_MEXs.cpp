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

void solve(){
    ll n;
    cin>>n;
    vector <ll> v(n);
    for (int i=0; i<n; i++)cin>>v[i];
    if (v[0]!=0 && v[0]!=1){
        cout<<-1<<"\n";
        return;
    }
    map <ll,ll> m;
    for (int i=0; i<n; i++){
        m[v[i]]++;
        if (v[i] > i+2){
            cout<<-1<<"\n";
            return;
        }
    }
    ll count1 = n, c = 0;
    if (v[0] == 1){
        while (m[c])c++;
        cout<<c<<" ";
        count1--;
        c++;
    }
    else{
        while (m[c])c++;
        cout<<c<<" ";
        count1--;
        c++;
    }
    ll viter = 1;
    while (count1){
        if (v[viter]!=v[viter-1]){
            cout<<v[viter-1]<<" ";
        }
        else{
            while (m[c])c++;
            cout<<c<<" ";
            c++;
        }   
        viter++;
        count1--;
    }

    // set <ll> s (v.begin(), v.end());
    // vector <ll> uniq(s.begin(), s.end());
    // vector <ll> ans(n,0);
    // ll iter = 0;
    // for (int i=0; i<n; i++){
    //     if (iter==uniq.size()){
    //         v[i] = v[i-1];
    //         continue;
    //     }

    // }
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