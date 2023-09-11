#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
using namespace std;
#define ll long long

void solve(){
    ll y,k,n;
    cin>>y>>k>>n;
    int a = y/k;
    ll count1=0;
    for (int i=a+1;i*k<=n;i++){
        cout<<i*k-y<<" ";
        count1++;
    }
    if (count1==0){
        cout<<-1<<endl;
    }
    else{
        cout<<endl;
    }
}

int main() 
{

        solve();
    
    return 0;
}