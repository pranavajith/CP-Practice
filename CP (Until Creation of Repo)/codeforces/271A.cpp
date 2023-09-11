#include <bits/stdc++.h>
#include <iostream>
#include <set>
using namespace std;
#define ll long long


int is_distinct(ll a){
    ll b = floor(log10(a)+1);
    set <ll> s;
    for (int i=0; i<b;i++){
        s.insert(a%10);
        a/=10;
    }
    if (s.size()==b){
        return 1;
    }
    return 0;
}

void solve(){
    ll n;
    cin>>n;
    ll i = n+1;
    while (true){
        if (is_distinct(i)){
            cout<<i<<endl;
            break;
        }
        i++;
    }
}

int main() 
{

        solve();
    
    return 0;
}