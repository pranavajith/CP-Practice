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
    ll n,k, sol=0, gap = 0;
    cin>>n>>k;
    string s;
    cin>>s;
    if (s[0]=='0'){
        ll check1 = -1;
        for (int i=0;i<n;i++){
            if (s[i]=='1'){
                check1 = i;
                break;
            }
        }
        if (check1==-1 || check1>k){
            s[0]='1';
            s='1'+s;
            sol++;
        }
        else{
            s='1'+s;
        }
    }
    else{
        s='1'+s;
        
    }
    if (s[s.size()-1]=='0'){
        ll check1 = -1;
        for (int i=s.size()-1;i>=0;i--){
            if (s[i]=='1'){
                // cout<<i<<" ";
                check1 = i;
                break;
            }
        }
        if (check1==-1 || s.size()-check1>k+1){
            s[s.size()-1]='1';
            s=s+'1';
            sol++;
        }
        else{
            s=s+'1';
        }
    }
    else{
        s=s+'1';
        
    }
    // cout<<"sol: "<<sol<<" s: "<<s<<" "; 
    n+=2;
    for (int i=0;i<n;i++){
        // cout<<"hey! ";
        if (s[i]=='1'){
            if (gap>=2*k+1){
                // gap--;
                // cout<<"gap: "<<gap<<" ";
                ll m = 1;
                while (k*(m+1)+m < gap)m++;
                // cout<<m<<"<-m ";
                sol+=m-1;
            }
            gap = 0;
        }
        gap++;
    }
    cout<<sol<<"\n";
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