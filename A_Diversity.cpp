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
     string s; cin>>s;
    int n; cin>>n;
    int f=0,unique=0,extra=0;
    if(s.size()<n){ cout<<"impossible"; return;}
    int let[26]={0};
    for(int i=0; i<s.size(); i++){
        let[s[i]-'a']++;
    }
    for(int i=0; i<26; i++){
        if(let[i]!=0){ 
            unique++;
            extra+=(let[i]-1);
        }
    }
    if(n<unique){ cout<<0;}
    else if(n==unique) cout<<0;
    else{
        if(extra>=(n-unique)) cout<<n-unique;
        else cout<<"impossibles";
    }
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