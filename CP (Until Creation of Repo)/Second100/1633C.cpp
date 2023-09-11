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

bool calc(ll hc, ll dc, ll hm, ll dm){
    // if (hc%dm!=0)hc+=dm;
    // if (hm%dc!=0)hm+=dc;
    if (hm-dc <=0)return true;
    if (ceil(float(hm)/dc) <= ceil(float(hc)/dm)){
        // cout<<hc<<" "<<dc<<" "<<hm<<" "<<dm<<"\n";
        return true;
    }
    return false;
}

void solve(){
    ll hc,dc,hm,dm,k,w,a;
    cin>>hc>>dc>>hm>>dm>>k>>w>>a;
    bool flag = false;
    for (int i=0;i<=k;i++){
        if (calc(hc+i*a, dc+(k-i)*w, hm, dm)){
            flag = true;
            break;
        }
    }
    if (flag)cout<<"YES\n";
    else cout<<"NO\n";
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