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
    if (n<4){
        cout<<-1<<"\n";
        return;
    }
    while (n>7){
        n-=4;
        cout<<n+3<<" "<<n+1<<" "<<n+4<<" "<<n+2<<" ";
    }
    if (n==7){
        cout<<"7 3 6 2 5 1 4 \n";
    }
    else if (n==6){
        cout<<"6 3 5 2 4 1 \n";
    }
    else if (n==5){
        cout<<"5 2 4 1 3 \n";
    }
    else if (n==4){
        cout<<"3 1 4 2 \n";
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