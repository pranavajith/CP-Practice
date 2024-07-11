#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cmath>
#include <map>
#include <sstream>
#include <deque>
#include <queue>
#include <stack>
#include <algorithm>
#include <limits>
#include <iomanip>
using namespace std;
#define ll long long
ll mod = 1e9 + 7;
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt", "w", stderr);

void solve(){
    string s="-";
        int n=0;
        string m;
        cin>>m;
        n=m.length();
        
        s+=m;
        s.push_back('-');
        for(int i=1;i<=n;i++){
            if(s[i]=='?'){
                if(s[i-1]=='a'){
                    if(s[i+1]=='b'){
                        s[i]='c';
                    }
                    else{
                        s[i]='b';
                    }
                }
                else if(s[i-1]=='b'){
                    if(s[i+1]=='a'){
                        s[i]='c';
                    }
                    else{
                        s[i]='a';
                    }
                }
                else if(s[i-1]=='c'){
                    if(s[i+1]=='a'){
                        s[i]='b';
                    }
                    else{
                        s[i]='a';
                    }
                }
                else{
                    if(s[i+1]=='a'){
                        s[i]='b';
                    }
                    else{
                        s[i]='a';
                    }
                }
                
            }
            else{
                if(s[i-1]==s[i] || s[i]==s[i+1]){
                    s="--1-";
                    break;}
            }
            
        }
        s.pop_back();
        cout<<s.substr(1,s.size())<<endl;
        
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