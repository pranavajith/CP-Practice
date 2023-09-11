#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll a,b,x,y,n;
    cin>>a>>b>>x>>y>>n;
    if (a>b){
        if ((b-y)>n){
            b-=n;
            // cout<<"hi";
        }
        else{
            b=y;
            a-=n-(b-y);
        }
    }
    else if (b>a){
        if ((a-x)>n){
            a-=n;
        }
        else{
            n-=(a-x);
            a=x;
            // cout<<n<<"\n";
            b-=n;
        }
    }
    else{
        if (x<y){
            if ((a-x)>n){
            a-=n;
            }
            else{
                n-=(a-x);
                a=x;
                // cout<<n<<"\n";
                b-=n;
            }
        }
        else{
            if ((b-y)>n){
            b-=n;
            }
            else{
                n-=(b-y);
                b=y;
                // cout<<n<<"\n";
                a-=n;
            }
        }
    }
    cout<<a<<" "<<b<<"\n";
    cout<<a*b<<"\n";

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