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
    ll n,countW=0;
    cin>>n;
    vector <ll> v;
    string s;
    cin>>s;
    bool bigflag = true;
    if (s[0]!='W')s='W'+s;
    if (s[s.size()-1]!='W')s+='W';   
    // cout<<s<<"\n";
    for (int i=0;i<s.size();i++){
        if (s[i]=='W'){
            countW++;
            v.push_back(i);
        }
    }
    // cout<<v[0]<<" "<<v[v.size()-1]<<" yay!\n";
    // cout<<countW<<" "<<s.size()<<"\n";
    
    if (countW==0 || countW==s.size())cout<<"YES\n";
    else if (n==0 || n==1)cout<<"NO\n";
    else{
        for (int i=0;i<v.size()-1;i++){
            bool flagred = false, flagblue = false;
            if (v[i+1]!=v[i]+1){
                // cout<<"lol\n";
                string mini_s = s.substr(v[i], v[i+1]-v[i]);
                // cout<<mini_s<<"\n";
                if (count(mini_s.begin(),mini_s.end(),'R')>0)flagred = true;
                if (count(mini_s.begin(),mini_s.end(),'B')>0)flagblue = true;
                if (!flagred || !flagblue){
                    bigflag = false;
                    break;
                }
            }
            // cout<<flagred<<" "<<flagblue<<"\n";
            
        }
        if (bigflag)cout<<"YES\n";
        else cout<<"NO\n";
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