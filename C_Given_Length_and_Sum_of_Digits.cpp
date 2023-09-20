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

ll bigm;

string minnum(ll m, ll n){
    if (m==1){
        return to_string(n);
    }
    for (ll i=0;i<=9;i++){
        if (i==0 && m==bigm)continue;
        if (9*(m-1)>=n-i){
            // return i*pow(10,m-1)+(minnum(m-1,n-i));
            return to_string(i)+minnum(m-1, n-i);
        }
    }
    return 0;
}
string maxnum(ll m, ll n){
    if (m==1){
        return to_string(n);
    }
    for (ll i=9;i>=0;i--){
        if (i<=n){
            // return i*pow(10,m-1)+(maxnum(m-1,n-i));
            return to_string(i)+maxnum(m-1, n-i);
        }
    }
    return 0;
}

void solve(){
    ll m,n;
    cin>>m>>n;
    bigm = m;
    if (m==1 && n<=9 && n>=0)cout<<n<<" "<<n<<"\n";
    else if (n==0 || n>9*m)cout<<-1<<" "<<-1<<"\n";
    else{
        cout<<minnum(m,n)<<" "<<maxnum(m,n)<<"\n";
    }
    // return;
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