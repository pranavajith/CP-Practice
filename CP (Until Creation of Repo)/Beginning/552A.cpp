#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n, sum=0;
    cin>>n;
    while (n--){
        ll x1,y1,x2,y2,x3,y3,x4,y4;
        cin>>x1>>y1>>x2>>y2;
        x3=x1;x4=x2;y3=y2;y4=y1;
        sum+=abs((x2-x1+1)*(y2-y1+1));
        // cout<<endl<<abs((x2-x1+1)*(y2-y1+1))<<endl;
    }
    cout<<sum<<endl;
}

int main() 
{
    // lTxtIO;

        solve();
    
    return 0;
}