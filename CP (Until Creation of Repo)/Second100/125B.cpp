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

void space(ll n){
    for (int i=0;i<2*n;i++){
        cout<<" ";
    }
}

void solve(){
    string s;
    cin>>s;
    ll height = 0;
    for (int i=0;i<s.size();i++){
        if (s[i]=='<' && s[i+1]=='/'){
            height--;
            space(height);
            cout<<s.substr(i,4)<<"\n";
            i+=3;
        }
        else if (s[i]=='<'){
            space(height);
            height++;
            cout<<s.substr(i,3)<<"\n";
            i+=2;
        }
        // cout<<i<<"!!\n";
    }
}

int main() 
{
    // lTxtIO;
    // ll t;
    // cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}