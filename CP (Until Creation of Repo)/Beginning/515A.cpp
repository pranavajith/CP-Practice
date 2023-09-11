#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll a,b,s;
    cin>>a>>b>>s;
    // cout<<s-(a+b)<<endl;
    if ((s-(abs(a)+abs(b)))%2==0 && abs(s)>=(abs(a)+abs(b))){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
        // cout<<(0%2==0);
    }
}

int main() 
{
    // lTxtIO;

        solve();
    
    return 0;
}