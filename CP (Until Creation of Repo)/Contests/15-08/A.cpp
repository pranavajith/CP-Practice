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
    ll a,b,c;
    cin>>a>>b>>c;
    // a-=min(a,b);
    // b-=min(a,b);
    if (b>a){
        cout<<"Second"<<endl;
    }
    else if (a>b){
        cout<<"First"<<endl;
    }
    else{
        if (c%2==1){
            cout<<"First"<<endl;
        }
        else{
            cout<<"Second"<<endl;
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