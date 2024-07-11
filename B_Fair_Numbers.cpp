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
    long long int n,x;
        cin>>n;
        
        int p=0;
        while(p==0){
            x=n;
            while(n>0){
              int a=n%10;
              if(a==0) {
                n=n/10;
                continue;
              }
              if(x%a!=0){
                p=1;
                break;
              }
              n=n/10;  
            }
            if(p==0) {
                cout<<x<<endl;
                break;
            }
            else {
                p=0;
                ++x;
                n=x;
            }
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