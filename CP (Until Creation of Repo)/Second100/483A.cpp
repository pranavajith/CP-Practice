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
    ll l,r;
    cin>>l>>r;
    if ((r-l < 2) || (r-l == 2 && l%2==1))cout<<-1<<"\n";
    else{
        if (l%2==0){
            cout<<l<<" "<<l+1<<" "<<l+2<<"\n";
        }
        else{
            cout<<l+1<<" "<<l+2<<" "<<l+3<<"\n";
        }
    }
}

int main() 
{
    // lTxtIO;
    // ll t;
    // cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}