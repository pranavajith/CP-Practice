#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <algorithm>
#include <limits>
#include <iomanip>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll a,b,c;
    cin>>a>>b>>c;
    if (c!=1){
        cout<<"YES\n"<<a<<"\n";
        while (a--)cout<<1<<" ";cout<<"\n";
    }
    else if (b==1 || (b==2 && a%2==1))cout<<"NO\n";
    else{
        cout<<"YES\n"<<a/2<<"\n";
        if (a%2==1)cout<<3<<" ";
        else cout<<2<<" ";
        for (int i=0;i<a/2 - 1;i++){
            cout<<2<<" ";
        }
        cout<<"\n";
    }
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}