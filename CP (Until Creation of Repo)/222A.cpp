#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
using namespace std;
#define ll long long

void solve(){
    ll n,k;
    cin>>n>>k;
    vector <ll> v;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        v.push_back(a);
    }
    ll count1=1;
    for (int i=k-1;i<n-1;i++){
        if (v[i]!=v[i+1]){
            count1--;
            break;
        }
    }
    if (count1){
        ll count2=0;
        for (int i=k-2;i>=0;i--){
            if (v[i]!=v[k-1]){
                break;
            }
            count2++;
        }
        cout<<k-count2-1<<endl;
    }
    else{
        cout<<-1<<endl;
    }
}

int main() 
{

        solve();
    
    return 0;
}