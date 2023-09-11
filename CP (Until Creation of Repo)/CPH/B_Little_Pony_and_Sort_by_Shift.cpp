#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <algorithm>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n, sol = 0;
    cin>>n;
    vector <ll> v;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        v.push_back(a);
    }
    bool flag = true;
    for (int i=1;i<n;i++){
        if (flag && v[i]<v[i-1]){
            flag = false;
            sol = i;
        }
        else if (!flag && v[i]<v[i-1]){
            sol=-1;
            break;
        }
    }
    if (sol==-1 || (v[v.size()-1] > v[0] && flag==false))cout<<-1<<"\n";
    else if (flag) cout<<0<<"\n";
    else cout<<n-sol<<"\n";

}

int main() 
{
    // TxtIO;
    // ll t;
    // cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}