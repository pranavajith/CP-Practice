#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long

void solve(){
    ll r,c;
    cin>>r>>c;
    vector <ll> v;
    vector <vector <ll> > v2; 
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            string s;
            cin>>s;
            for (auto d : s){
                if (d=='S'){
                    v.push_back(1);
                }
                else{
                    v.push_back(0;)
                }
            }
        }
    }
}

int main() 
{
        solve();
    
    return 0;
}