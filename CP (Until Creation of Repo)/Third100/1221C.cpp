#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <algorithm>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){   
    ll c,m,x, count1=0;
    cin>>c>>m>>x;
    if (c>m){
        x+=c-m;
        c=m;
    }
    if (m>c){
        x+=m-c;
        m=c;
    }
    if (x>=c){
        cout<<c<<"\n";
    }
    else if (c==0){
        cout<<0<<"\n";
    }
    else if (x<c){
        count1+=x;
        c-=x;
        count1+=2*c/3;
        cout<<count1<<"\n";
    }
}

int main() 
{
    // TxtIO;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}