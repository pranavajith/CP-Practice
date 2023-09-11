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
    ll m;
    cin>>m;
    set <ll> v;
    for (int i=1;i<=m;i++){
        if (i==1){
            v.insert(1);
            cout<<1<<" ";
        }
        // else{
        // if (count(v.begin(),v.end(),i+1)==0){
        //     // int a=i+1;
        //    for (int j=1;j*(i+1)<=m;j++){
        //     v.push_back(j*(i+1));
        //     cout<<j*(i+1)<<" ";
        //    }
        // }
        // }
        else{
            if (count(v.begin(),v.end(),i)==0){
                ll d = i;
                // while (true){
                //     if (d>m)break;
                //     cout<<d<<" ";
                //     v.insert(d);
                //     d=d*2;
                // }
                cout<<i<<" ";
                // if (i*2<=)
                
            }
        }
    }

}

int main() 
{
    // lTxtIO;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}