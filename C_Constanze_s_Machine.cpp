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
    string s;
    cin>>s;
    ll countun = 0, n = s.size(), sol=1;
    for (ll i=0;i<n;i++){
        if (s[i]=='w' || s[i]=='m'){
            cout<<0<<"\n";
            return;
        }
    if (i!=n-1 && ((s[i]=='u' && s[i+1]=='u') || (s[i]=='n' && s[i+1]=='n')))countun++;
    else {
        if (countun==1){
            sol*=2;
            sol%=(1000000007);
        }
        else if (countun!=0){
            sol *= countun*(countun+1)/2;
            sol%=(1000000007);
        }
        countun=0;
    }
    }
    cout<<sol%(1000000007)<<"\n";
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