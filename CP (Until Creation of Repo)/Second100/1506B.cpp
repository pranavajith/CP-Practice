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
    vector <char> v;
    string s;
    cin>>s;
    if ((count(s.begin(),s.end(),'*'))==1)cout<<1<<"\n";
    else{
        for (int i=0;i<s.size();i++){
            if (s[i]=='*'){
                v.push_back(i);
            }
        }
        ll sol = 0, count1=0, ind=0;
        for (int i=0;i<v.size();i++){
            if (i==0){
                sol++;
                count1=0;
            }
            else if (i==v.size()-1){
                sol++;
                ind = v.size()-1;
            }
            else if (v[i+1]-v[ind]>k){
                sol++;
                ind = i;
                // cout<<v[i+1]<<" ";
            }
            // else if (count1==k-1){
            //     count1=0;
            //     sol++;
            // }
            // else{
            //     count1++;
            // }
            
            // cout<<count1<<"\n";
            // cout<<sol<<"\n";
            // ind++;
        } 
        cout<<sol<<"\n";
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