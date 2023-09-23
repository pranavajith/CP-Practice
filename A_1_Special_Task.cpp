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
    string s;
    cin>>s;
    ll a, cur=10;
    map <char,ll> m;
    if ((s[0]>='A' && s[0]<='Z') || s[0]=='?'){
        if (s[0]!='?'){
            m[s[0]]++;
            cur--;
            }
        a=9; 
    }
    else a=1;
    
    for (int i=1;i<s.size();i++){
        if (s[i]>='A' && s[i]<='Z'){
            if (m[s[i]]==0){
                m[s[i]]++;
                a*=cur;
                cur--;
            }
        }
        else if (s[i]=='?'){
            a*=10;
            // cout<<"! "<<cur<<"\n";
            // cur--;
            }
    }
    cout<<a<<"\n";
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