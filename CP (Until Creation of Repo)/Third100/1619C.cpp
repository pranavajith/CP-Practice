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
    string a,s;
    cin>>a>>s;
    ll ai=a.size()-1,si=s.size()-1;
    if (s.size()<a.size())cout<<-1<<"\n";
    else {
        string b="";
        vector <ll> v;
        bool flag2 = true;
        while (true){
            if (ai<=-1 && si<=-1){
                // cout<<"hey!";
                break;
            }
            else if (si==-1){
                // cout<<ai;
                // cout<<"hey!";
                cout<<-1<<"\n";
                flag2=false;
                break;
            }
            else if (ai==-1){  
                // cout<<"ok";
                v.push_back(s[si]-'0');
                // cout<<s[si]<<" lol1 ";
                // cout<<v[v.size()-1];
                ai++;
                // break;
            }
            else if (((s[si]-'0') < (a[ai] - '0')) && (si==0)){
                // cout<<"hey!";
                // cout<<" "<<si<<" "<<ai<<" "<<b<<" lol\n";
                flag2=false;
                cout<<-1<<"\n"; 
                break;
            }
            else if (((s[si]-'0') < (a[ai] - '0')) && ((s[si-1]-'0')!=1) && (s[si]-'0' <= 8)){
                // cout<<"hey!";
                // cout<<" "<<si<<" "<<ai<<" "<<b<<" lol\n";
                flag2=false;
                cout<<-1<<"\n";
                break;
            }
            else if ((s[si] - '0') >= (a[ai] - '0')){
                // b[si]=(s[si]-'0')-(a[ai]-'0');
                // cout<<"ok";
                v.push_back((s[si]-'0')-(a[ai]-'0'));
                // cout<<(s[si]-'0')-(a[ai]-'0')<<" lol2 ";
                // b = to_string((s[si]-'0')-(a[ai]-'0')) + b;
            }
            else if ((s[si]-'0') < (a[ai]-'0')){
                ll w = 10+(s[si]-'0')-(a[ai]-'0');
                v.push_back(w);
                // cout<<w<<" lol3 ";
                // b = to_string(w)+b;
                si--;
            }
            else{
                flag2=false;
                cout<<-1<<"\n";
                return;
            }
            ai--;si--;
        }
        bool flag1=false;
        if (flag2){
            // for (auto d:v)cout<<d<<" ";
        reverse(v.begin(),v.end());
        for (int i=0;i<v.size();i++){
            if (v[i]!=0)flag1=true;
            if (flag1)cout<<v[i];
        }
        cout<<"\n";
        }
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