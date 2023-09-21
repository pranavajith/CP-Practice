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
    ll n,k;
    cin>>n>>k;
    // vector <ll> v;
    string s;
    cin>>s;
    // for (int i=0;i<n;i++){
    //     if (s[i]=='B')v.push_back(i);
    // }
    // if (v.size()==0 || v.size()==1)cout<<v.size()<<"\n";
    // else{
    //     // ll i = 0;
    //     // ll siz = v.size();
    //     for (int i=0;i<v.size();i++){

    //     }
    // }
    ll ans=0;
    for (int i=0;i<n;i++){
        // cout<<i<<"! "<<k<<" ";
        if (s[i]=='B'){
            ans++;
            i+=k-1;
        }
    }
    cout<<ans<<"\n";


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