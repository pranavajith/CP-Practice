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
    ll n, sum1=0, curmax = INT_MIN, cursign;
    cin>>n;
    vector <ll> v;
    for (int i=0;i<n;i++){
        ll a;
        if (i==0){
            cin>>a;
            cursign = a/abs(a);
            curmax = a;
            if (n==1)sum1=a;
        }
        else{
            cin>>a;
            if (a/abs(a) != cursign || i==n-1){
                if (i==n-1 && a/abs(a)==cursign)curmax = max(curmax, a);
                else if (i==n-1 && a/abs(a)!=cursign){
                    sum1+=curmax;
                    curmax=a;
                }
                cursign *= -1;
                // cout<<curmax<<" ";
                sum1+=curmax;
                curmax = a;
            }
            else{
                curmax = max(curmax, a);
            }
        }
    }
    cout<<sum1<<"\n";
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