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
    ll n;
    cin>>n;
    vector <ll> v(n);
    for (int i=0;i<n;i++)cin>>v[i];
    ll a = *max_element(v.begin(),v.end());
    // cout<<v[0]<<" "<<v[v.size()-1]<<" "<<a<<"\n";
    if (v[0]!=a && v[v.size()-1]!=a){
        cout<<-1<<"\n";
    }
    else{
        int i=0,j=n-1;
        deque <ll> v2;
        while (i!=j){
            if (v[i]<v[j]){
                v2.push_front(v[i]);
                i++;
            }
            else{
                v2.push_back(v[j]);
                j--;
            }
        }
        cout<<v[i]<<" ";
        for (auto it = v2.begin();it!=v2.end();it++){
            cout<<*it<<" ";
        }
        cout<<"\n";
    }
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