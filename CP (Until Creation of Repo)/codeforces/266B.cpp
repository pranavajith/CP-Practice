#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long

void solve(){
    ll n,t;
    cin>>n>>t;
    // vector <char> v;
    string s;
    cin>>s;
    for (int i=0;i<t;i++){
        for (int j=0;j<n-1;j++){
            if (s[j]=='B' & s[j+1]=='G'){
                s[j] = 'G';
                s[j+1] = 'B';
                j++;
            }
        }
    }
    for (auto d:s){
        cout<<d;
    }
    cout<<endl;
}

int main() 
{

        solve();
    
    return 0;
}