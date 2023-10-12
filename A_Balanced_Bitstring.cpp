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
    ll n,k, count0 = 0, count1 = 0;
    cin>>n>>k;
    string s;
    cin>>s;
    for (int i=0 ; i<k; i++){
        ll temp = -1;
        for (int j=i; j<n;j+=k){
            if (s[j]=='?')continue;
            if (temp==-1)temp=s[j]-'0';
            else{
                if (s[j]-'0'!=temp){
                    cout<<"NO\n";
                    return;
                }
            }
        }
        if (temp!=-1)
        {if (temp)count1++;
        else count0++;}
    }
    if (max(count1, count0) <= k/2)cout<<"YES\n";
    else cout<<"NO\n";
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