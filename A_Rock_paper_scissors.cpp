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
    string s[3];
    for(int i=0;i<3;i++){
        cin>>s[i];
    }
    char c[4]={'F','M','S','?'};
    char wr,wp,ws;
    int r=0,p=0,sc=0;
    for(int i=0;i<3;i++){
        if(s[i]=="rock"){
        r++;
        if(r==1) 
        wr=c[i];
        }
        else if(s[i]=="paper"){
        p++;
        if(p==1) 
        wp=c[i];
        }
        else if(s[i]=="scissors"){
        sc++;
        if(sc==1) 
        ws=c[i];
        }
    }
    if(r==1 && sc==2) cout<<wr;
    else if(sc==1 && p==2) cout<<ws;
    else if(p==1 && r==2) cout<<wp;
    else cout<<c[3];
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