#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;
    vector <ll> v;
    for (int i=0;i<n;i++){
        ll m;
        cin>>m;
        v.push_back(m);
    }
    sort(v.begin(),v.end(), greater<ll>());

    ll sum = 0;
    for (int i=0;i<v.size();i++){
        sum += v[i];
    }


    ll count=0;
    ll sum2=0;
    for (int i=0;i<v.size();i++){
        sum2+=v[i];
        count++;
        if (sum2>sum/2){
            break;
        }
    }
    cout<<count<<endl;

}

int main() 
{

        solve();
    
    return 0;
}