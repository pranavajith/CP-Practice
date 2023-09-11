#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    map < string, ll> m;
    ll n;
    // vector <string> v(n);
    cin>>n;
    for (int i=0;i<n;i++){
        string s;
        cin>>s;
        if (m[s]==0){
            cout<<"OK"<<endl;
        }
        else{
            cout<<s<<m[s]<<endl;
        }
        m[s]++;
    }
}

int main() 
{
    // lTxtIO;

        solve();
    
    return 0;
}