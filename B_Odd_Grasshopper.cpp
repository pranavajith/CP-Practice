#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <queue>
#include <stack>
#include <algorithm>
#include <limits>
#include <iomanip>
using namespace std;
#define ll long long
ll mod = 1e9 + 7;
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll a,b;
    cin>>a>>b;
    if (b%4==0){
        b = 0;
    }
    else if (b%4==1){
        b*=-1;
    }
    else if (b%4==2){
        b=1;
    }
    else {
        b++;
    }
    if (a%2==0){
        cout<<a+b<<"\n";
    }
    else{
        cout<<a-b<<"\n";
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