#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
using namespace std;
#define ll long long
const int INF = 1e6+5;
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);
int p[INF],q[INF],sol[INF];

bool check_for_p(int x, int y){
    return p[x]<p[y];
}

void solve(){

    ll n;
    cin>>n;
    for (int i=1;i<=n;i++)cin>>p[i];
    string s1;
    cin>>s1;s1=" "+s1;
    for (int i=1;i<=n;i++)q[i]=i;
    sort(q+1,q+1+n,check_for_p);
    // for (int i=1;i<=n;i++)cout<<q[i]<<" ";
    // cout<<endl;
    ll ans=1;
    for (int i=1;i<=n;i++){
        // cout<<ans<<"w ";
        if (s1[q[i]]=='0')sol[q[i]]=ans++;
    }
    for (int i=1;i<=n;i++){
        // cout<<ans<<"w ";
        if (s1[q[i]]=='1')sol[q[i]]=ans++;
    }
    for (int i=1;i<=n;i++){
        cout<<sol[i]<<" ";
    }
    cout<<endl;
}

int main() 
{
    // lTxtIO;
    ll t;
    cin>>t;
    // t=1;
    while(t--){
        solve();
    }
    return 0;
}