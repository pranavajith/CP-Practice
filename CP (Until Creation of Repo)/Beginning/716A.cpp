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
    ll n,c;
    cin>>n>>c;
    ll fin=0;
    ll cur_time=0;
    vector <ll> v(n);
    for (int i=0;i<n;i++){
        fin++;
        ll a;
        cin>>a;
        if (a-cur_time>c){
            fin=1;
        }
        cur_time=a;
    }
    cout<<fin<<endl;
}

int main() 
{
    // lTxtIO;

        solve();
    
    return 0;
}