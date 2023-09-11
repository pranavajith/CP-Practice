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

void solve(){
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    if (k & 1){
        string a="",b="";
        for (int i=0;i<n;i++){
            if (i & 1)a+=s[i];
            else b+=s[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        for (int i=0,j=0,k=0;i<n;i++){
            if (i & 1)cout<<a[j++];
            else cout<<b[k++]; 
        }
        cout<<"\n";
    }   
    else{
        sort(s.begin(),s.end());
        cout<<s<<"\n";  
    }
}

int main() 
{
    // TxtIO;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}