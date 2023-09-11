#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
using namespace std;
#define ll long long

void solve(){
    ll n, sum=0, count_odd = 0;
    cin>>n;
    ll n1=n;
    vector <ll> odd;
    while (n1--){
        ll a;
        cin>>a;
        if (a%2==0){
            sum+=a;
        }
        else{
            odd.push_back(a);
            count_odd++;
        }
    }
    if (count_odd%2==0){
        for (auto d:odd){
            sum+=d;
        }
    }
    else{
        sort(odd.begin(),odd.end());
        for (int i=1;i<odd.size();i++){
            sum+=odd[i];
        }
    }
    cout<<sum<<endl;
}

int main() 
{

        solve();
    
    return 0;
}