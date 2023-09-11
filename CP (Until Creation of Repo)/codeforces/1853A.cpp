#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long

void solve(){
    int w = 0;
    ll n;
    cin>>n;
    vector <ll> v;
    while(n--){
        int i;
        cin>>i;
        v.push_back(i);
    }
    ll gap = 0;
    if(v[1]-v[0]>0){
        gap = v[1]-v[0];
    }
    
    for (int i=1;i<v.size();i++){
        if (v[i]-v[i-1] < 0){
            cout<<0<<endl;
            w+=1;
            break;
        }
        else if (v[i]-v[i-1]<gap){
            gap = v[i]-v[i-1];
        }
    }
    
    int fin = floor(gap/2)+1;

    if (gap!=0 & w==0)
    cout<<int(floor(gap/2)+1)<<endl;
    else if (gap == 0 & w==0){
        cout<<1<<endl;
    }
}

int main() 
{
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}