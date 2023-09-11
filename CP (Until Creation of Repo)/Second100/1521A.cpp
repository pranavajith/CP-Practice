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
    ll a=0,b=0;
    cin>>a>>b;
    if (b==1){
        cout<<"NO"<<endl;
    }
    else{
        ll n=0,m=0;
        cout<<"YES"<<endl;
        if (b==2 || b==4){
            n=3;m=1;
            b=4;
        }
        else {
            n=b-2;m=2;
        }
        cout<<a*m<<" "<<a*n<<" "<<a*b<<endl;
    // }
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