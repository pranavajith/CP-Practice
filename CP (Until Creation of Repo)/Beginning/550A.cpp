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
    ll n, check1=0;
    cin>>n;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        if (a==1)check1=1;
    }
    if (check1){
        cout<<-1<<endl;
    }
    else{
        cout<<1<<endl;
    }
}

int main() 
{

        solve();
    
    return 0;
}