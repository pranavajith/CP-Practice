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
    ll sum=0;
    for (int i=0;i<5;i++){
        ll a;
        cin>>a;
        sum+=a;
    }
    if (sum==0){
        cout<<-1<<endl;
    }
    else if(sum%5==0){
        cout<<sum/5<<endl;
    }
    else{
        cout<<-1<<endl;
    }
}   

int main() 
{
    // lTxtIO;

        solve();
    
    return 0;
}