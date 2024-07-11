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
     int n,a,c=0,i=0;  cin>>n;
    while(i!=n){
        cin>>a;
        if(n==1 && a==1){
            cout<<"YES\n";exit(0);
        }
        else if(n==1 && a==0){
            cout<<"NO\n";exit(0);
        }
         if(a==0)    c++;
        i++;
    }
    if(c==1)    cout<<"YES\n";
    else    cout<<"NO\n";
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // TxtIO;
    // ll t; cin>>t; while(t--)
        solve();
    return 0;
}