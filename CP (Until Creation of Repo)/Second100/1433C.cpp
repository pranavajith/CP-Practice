#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n, big=-1;
    cin>>n;
    vector <ll> v, big_ind;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        v.push_back(a);
        big = max(big,a);
    }
    for (int i=0;i<n;i++){
        if (v[i]==big){
            big_ind.push_back(i);
        }
    }
    // cout<<" big: "<<big<<"\n";
    bool check = false;
    for (auto d:big_ind){
        if ((d==0 && v[1]!=big) || (d==n-1 && v[n-2]!=big)){
            cout<<d+1<<"\n";
            check = true;
            break;
        }
        else if (d!=0 && d!=n-1 && (v[d-1]!=big || v[d+1]!=big)){
            cout<<d+1<<"\n";
            check = true;
            break;
        }
    }
    if (!check)cout<<-1<<"\n";
}

int main() 
{
    // lTxtIO;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}