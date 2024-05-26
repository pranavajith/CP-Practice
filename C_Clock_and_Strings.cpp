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
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a>b){
        swap(a,b);
    }
    if(c>a && c<b){
        if(d>a && d<b){
            cout<<"NO"<<endl;
        }
        else{
        cout<<"YES"<<endl;
        }
    }
    else if(d>a && d<b){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
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