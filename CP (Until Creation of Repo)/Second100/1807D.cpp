#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n,q,sum1=0;
    cin>>n>>q;
    ll ar1[n];
    vector <string> v_s;
    for (int i=0;i<n;i++){
        ll a;
        cin>>a;
        sum1+=a;
        ar1[i]=sum1;
    }
    for (int i=0;i<q;i++){
        ll l,r,k, extra = 0;
        cin>>l>>r>>k;
        if (k%2==1 && (r-l+1)%2==1){
            extra=1;
        }
        ll sum2;
        if (l>=2){
            sum2 = ar1[l-2]+extra+ar1[n-1]-ar1[r-1];
        }
        else{
            sum2 = extra+ar1[n-1]-ar1[r-1];
        }
        // cout<<sum2<<endl;
        if (sum2%2==0){
            v_s.push_back("NO");
        }
        else{
            v_s.push_back("YES");
        }
    }
    for (auto d:v_s){
        cout<<d<<endl;
    }
}

int main() 
{
    // lTxtIO;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}