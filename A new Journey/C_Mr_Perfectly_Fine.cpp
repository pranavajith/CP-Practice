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
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n;
    cin>>n;
    set <ll> left;
    set <ll> right;
    set <ll> both;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        string s;
        cin>>s;
        if (s=="01")right.insert(a);
        else if (s=="10")left.insert(a);
        else if (s=="11")both.insert(a);
    }
    if ((left.size()==0 || right.size()==0) && both.size()==0)cout<<-1<<"\n";
    else{
        if (left.size()==0 || right.size()==0){
            cout<<*both.begin()<<"\n";
        }
        else if ( both.size()==0){
            cout<<*left.begin()+*right.begin()<<"\n";
        }
        else{
            cout<<min(*both.begin(), *left.begin()+*right.begin())<<"\n";
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