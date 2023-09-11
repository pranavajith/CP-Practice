#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
using namespace std;
#define ll long long
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    ll n, sum=0;
    cin>>n;
    vector <ll> v;
    string s;
    cin>>s;
    for (int i=0;i<n;i++){
        if (s[i]=='L'){
            v.push_back((n-i-1)-i);
            sum+=i;
        }
        else{
            v.push_back(i-(n-i-1));
            sum+=n-i-1;
        }
    }
    sort(v.rbegin(),v.rend());
    for (int i=0;i<n;i++){
        if (v[i]>0)sum+=v[i];
        cout<<sum<<" ";
    }
    cout<<"\n";
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