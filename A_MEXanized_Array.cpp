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
    ll n,k,x;
    cin>>n>>k>>x;
    
    if (k>x+1 || (k>n) ||(k==x && x==0))cout<<-1<<"\n";
    else{
        vector <ll> v;
        ll sum1 = 0;
        for (int i=0;i<k;i++){
            // v.push_back(i);
            sum1+=i;
        }
        if (k==x){
            // for (int i=0;i<n-k;i++){
                sum1+=(k-1)*(n-k);
            // }
            cout<<sum1<<"\n";
        }
        else{
            sum1+=(x)*(n-k);
            cout<<sum1<<"\n";
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