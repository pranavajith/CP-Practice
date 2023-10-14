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
    ll n;
    cin>>n;
    if (n%2==0){
        for (int i=n-1; i>0; i--){
            for (int j=0; j<i; j++){
                if (j<n/2-1)cout<<1<<" ";
                else if (j== n/2 - 1)cout<<0<<" ";
                else cout<<-1<<" ";
            }
        }
        cout<<"\n";
    }
    else{
        for (int i=n-1; i>0; i--){
            for (int j=0; j<i; j++){
                if (j<n/2)cout<<1<<" ";
                else cout<<-1<<" ";
            }
        }
        cout<<"\n";
    }
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    ll t; cin>>t; while(t--)
        solve();
    return 0;
}