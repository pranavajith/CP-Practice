#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long

void solve(){
    ll n,p1,p2;
    cin>>n;
    vector<ll> v1;
    cin>>p1;
    for (int i=0;i<p1;i++){
        int m;
        cin>>m;
        v1.push_back(m);
    }
    cin>>p2;
    for (int i=0;i<p2;i++){
        int m;
        cin>>m;
        v1.push_back(m);
    }
    ll count1 = 0;
    for (int i=1;i<n+1;i++){
        if (count(v1.begin(),v1.end(),i)){
            count1++;
        }
    }
    if (count1==n)cout<<"I become the guy."<<endl;
    else cout<<"Oh, my keyboard!"<<endl;

}

int main() 
{

        solve();
    
    return 0;
}