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
    ll a,b,count1=0;
    cin>>a>>b;
    if (b==1){
        cout<<1<<endl;
    }
    else if (b>pow(a,2)){
        cout<<0<<endl;
    }
    // else if (b==pow(a,2)){
    //     cout<<1<<endl;
    // }
    else{
    for (int i=1;i<=floor(sqrt(b));i++){
        if (b%i==0 && (b/i)<=a){
            if (i*i==b){
                count1++;
            }
            else{
            count1+=2;}
        }
    }
    cout<<count1<<endl;
}
}

int main() 
{
    // lTxtIO;

        solve();
    
    return 0;
}